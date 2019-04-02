#pragma once
#include <ignore_me/la.h>

class KDNode
{
public:
    KDNode();
    ~KDNode();

    KDNode* leftChild;
    KDNode* rightChild;
    unsigned int axis; // Which axis split this node represents
    glm::vec3 minCorner, maxCorner; // The world-space bounds of this node
    std::vector<glm::vec3*> particles; // A collection of pointers to the particles contained in this node.
};

class KDTree
{
public:
    KDTree();
    ~KDTree();
    void build(std::vector<glm::vec3*> &points);
    KDNode* buildHelper(std::vector<glm::vec3*> points, glm::vec3 min,
                                glm::vec3 max, int depth);
    void clear();

    std::vector<glm::vec3> particlesInSphere(glm::vec3 c, float r); // Returns all the points contained within a sphere with center c and radius r
    void searchHelper(std::vector<glm::vec3>* output, KDNode* root,
                              glm::vec3 center, float radius);

    KDNode* root;
    glm::vec3 minCorner, maxCorner; // For visualization purposes
};
