#include "kdtree.h"

KDNode::KDNode()
    : leftChild(nullptr), rightChild(nullptr), axis(0), minCorner(), maxCorner(), particles()
{}

KDNode::~KDNode()
{
    delete leftChild;
    delete rightChild;
}

KDTree::KDTree()
    : root(nullptr)
{}

KDTree::~KDTree()
{
    delete root;
}

// Comparator functions you can use with std::sort to sort vec3s along the cardinal axes
bool xSort(glm::vec3* a, glm::vec3* b) { return a->x < b->x; }
bool ySort(glm::vec3* a, glm::vec3* b) { return a->y < b->y; }
bool zSort(glm::vec3* a, glm::vec3* b) { return a->z < b->z; }


void KDTree::build(std::vector<glm::vec3*> &points)
{
    // initialize min and max x, y, z values
    float min_x = std::numeric_limits<float>::max();
    float min_y = std::numeric_limits<float>::max();
    float min_z = std::numeric_limits<float>::max();
    float max_x = std::numeric_limits<float>::min();
    float max_y = std::numeric_limits<float>::min();
    float max_z = std::numeric_limits<float>::min();

    // create a list of values sorted
    std::vector<glm::vec3> sorted_values;

    // find the min and max x, y, z values
    for (auto p : points) {
        //sorted_values.push_back(*p);

        if (p->x < min_x) {
            min_x = p->x;
        }
        if (p->y < min_y) {
            min_y = p->y;
        }
        if (p->z < min_z) {
            min_z = p->z;
        }
        if (p->x > max_x) {
            max_x = p->x;
        }
        if (p->y > max_y) {
            max_y = p->y;
        }
        if (p->z > max_z) {
            max_z = p->z;
        }
    }

    // set min and max corners
    minCorner = glm::vec3(min_x, min_y, min_z);
    maxCorner = glm::vec3(max_x, max_y, max_z);

    // sort the values
    std::sort(points.begin(), points.end(), xSort);

    // build the tree
    root = buildHelper(points, minCorner, maxCorner, 0);
}

KDNode* KDTree::buildHelper(std::vector<glm::vec3*> points, glm::vec3 min,
                            glm::vec3 max, int depth) {
    // if p contains only one point, return a leaf storing that point
    if (points.size() == 1) {
        KDNode* new_node = new KDNode();
        new_node->maxCorner = *points[0];
        new_node->minCorner = *points[0];
        new_node->axis = depth;
        new_node->particles.push_back(points[0]);
        return new_node;
    }

    // if depth mod 3 == 0, vertical line through x coord; mod 3 == 1, line through y coord; mod 3
    // == 2, line through z coord
    bool (*comp_to_use)(glm::vec3*, glm::vec3*);
    if (depth % 3 == 0) {
        comp_to_use = &ySort;
    } else if (depth % 3 == 1) {
        comp_to_use = &zSort;
    } else if (depth % 3 == 2) {
        comp_to_use = &xSort;
    }

    // break into 2 arrays
    int temp_halfsize = points.size() / 2;
    std::vector<glm::vec3*> pt_1, pt_2;
    for (int i = 0; i < points.size(); i++)  {
        if (i < temp_halfsize) {
            pt_1.push_back(points[i]);
        }
        else {
            pt_2.push_back(points[i]);
        }
    }

    glm::vec3 newMin1, newMin2, newMax1, newMax2;

    if (depth % 3 == 0) {
        newMin1 = min;
        newMin1.x = pt_1[0]->x;
        newMax1 = max;
        newMax1.x = pt_1[pt_1.size() - 1]->x;

        newMin2 = min;
        newMin2.x = (pt_2[0])->x;
        newMax2 = max;
        newMax2.x = (pt_2[pt_2.size() - 1])->x;
    }

    else if (depth % 3 == 1) {
        newMin1 = min;
        newMin1.y = pt_1[0]->y;
        newMax1 = max;
        newMax1.y = pt_1[pt_1.size() - 1]->y;

        newMin2 = min;
        newMin2.y = (pt_2[0])->y;
        newMax2 = max;
        newMax2.y = (pt_2[pt_2.size() - 1])->y;
    }

    else if (depth % 3 == 2) {
        newMin1 = min;
        newMin1.z = pt_1[0]->z;
        newMax1 = max;
        newMax1.z = pt_1[pt_1.size() - 1]->z;

        newMin2 = min;
        newMin2.z = (pt_2[0])->z;
        newMax2 = max;
        newMax2.z = (pt_2[pt_2.size() - 1])->z;
    }

    KDNode* newNode = new KDNode();
    newNode->minCorner = min;
    newNode->maxCorner = max;
    newNode->axis = depth;

    std::sort(pt_1.begin(), pt_1.end(), comp_to_use);
    std::sort(pt_2.begin(), pt_2.end(), comp_to_use);

    newNode->leftChild  = buildHelper(pt_1, newMin1, newMax1, depth + 1);
    newNode->rightChild = buildHelper(pt_2, newMin2, newMax2, depth + 1);
    return newNode;
}

std::vector<glm::vec3> KDTree::particlesInSphere(glm::vec3 c, float r)
{
    // Returns all the points contained within a sphere with center c and radius r
    std::vector<glm::vec3> output = std::vector<glm::vec3>();
    searchHelper(&output, root, c, r);
    return output;
}

void KDTree::searchHelper(std::vector<glm::vec3>* output, KDNode* root,
                          glm::vec3 center, float radius) {
    if(root->leftChild == nullptr && root->rightChild == nullptr) {
        if (glm::distance(*root->particles[0], center) < radius) {
            output->push_back(*root->particles[0]);
        }
    }
    else {
        glm::vec3 min = center - glm::vec3(radius, radius, radius);
        glm::vec3 max = center + glm::vec3(radius, radius, radius);
        if (root->minCorner.x > max.x || root->maxCorner.x < min.x ||
                root->minCorner.y > max.y || root->maxCorner.y < min.y ||
                root->minCorner.z > max.z || root->maxCorner.z < min.z) {
            // this is not within the range
        } else {
            searchHelper(output, root->leftChild, center, radius);
            searchHelper(output, root->rightChild, center, radius);
        }
    }
}

void KDTree::clear()
{
    delete root;
    root = nullptr;
}
