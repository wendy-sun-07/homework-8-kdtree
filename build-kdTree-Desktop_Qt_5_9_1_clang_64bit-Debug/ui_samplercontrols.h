/********************************************************************************
** Form generated from reading UI file 'samplercontrols.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMPLERCONTROLS_H
#define UI_SAMPLERCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SamplerControls
{
public:
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QSpinBox *numSamplesSpinBox;
    QComboBox *comboBox;
    QLabel *label_3;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *xSpinBox;
    QDoubleSpinBox *ySpinBox;
    QDoubleSpinBox *zSpinBox;
    QDoubleSpinBox *rSpinBox;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SamplerControls)
    {
        if (SamplerControls->objectName().isEmpty())
            SamplerControls->setObjectName(QStringLiteral("SamplerControls"));
        SamplerControls->resize(260, 543);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SamplerControls->sizePolicy().hasHeightForWidth());
        SamplerControls->setSizePolicy(sizePolicy);
        SamplerControls->setStyleSheet(QStringLiteral("background-color: yellow;"));
        label = new QLabel(SamplerControls);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 241, 50));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("QLabel {\n"
"	font: \"Comic Sans MS\";\n"
"	color: magenta;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(SamplerControls);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 101, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(8);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("QLabel {\n"
"	font: \"Comic Sans MS\";\n"
"	color: blue;\n"
";\n"
"}"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line = new QFrame(SamplerControls);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 40, 241, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        numSamplesSpinBox = new QSpinBox(SamplerControls);
        numSamplesSpinBox->setObjectName(QStringLiteral("numSamplesSpinBox"));
        numSamplesSpinBox->setEnabled(true);
        numSamplesSpinBox->setGeometry(QRect(10, 90, 71, 22));
        numSamplesSpinBox->setStyleSheet(QLatin1String("QSpinBox{\n"
"	background-color: rgb(226, 153, 186);\n"
"    border-radius: 5px;\n"
"}\n"
"QSpinBox::down-button{\n"
"	color: pink;\n"
"    border-radius: 5px;\n"
"}\n"
"QSpinBox::up-button{\n"
"	color: black;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        numSamplesSpinBox->setMinimum(2);
        numSamplesSpinBox->setMaximum(1048576);
        numSamplesSpinBox->setSingleStep(1);
        numSamplesSpinBox->setValue(4);
        comboBox = new QComboBox(SamplerControls);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 150, 241, 31));
        comboBox->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid rgb(255, 85, 255);\n"
"    border-radius: 5px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: rgb(255, 85, 255);\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 5px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 5px;\n"
"}\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 2px solid rgb(255, 170, 255);\n"
"    selection-background-color: rgb(255, 170, 255);\n"
"	font: \"Comic Sans MS\";\n"
"    border-radius: 5px;\n"
"}"));
        label_3 = new QLabel(SamplerControls);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 120, 131, 21));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("QLabel {\n"
"	font: \"Comic Sans MS\";\n"
"	color: blue;\n"
";\n"
"}"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        checkBox = new QCheckBox(SamplerControls);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(120, 200, 119, 21));
        checkBox->setStyleSheet(QLatin1String("QCheckBox::indicator{\n"
"    border: 1px solid rgb(255, 85, 255);\n"
"    border-radius: 5px;\n"
"    padding: 1px 1px 1px 3px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: yellow;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: rgb(255, 170, 255)\n"
"}"));
        checkBox->setChecked(true);
        pushButton = new QPushButton(SamplerControls);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 200, 93, 28));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid rgb(85, 255, 255);\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(255, 170, 255), stop: 1 rgb(255, 85, 255));\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(255, 85, 255), stop: 1 rgb(255, 170, 255));\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));
        label_4 = new QLabel(SamplerControls);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 300, 131, 21));
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("QLabel {\n"
"	font: \"Comic Sans MS\";\n"
"	color: blue;\n"
";\n"
"}"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_5 = new QLabel(SamplerControls);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 330, 51, 21));
        label_5->setFont(font1);
        label_5->setStyleSheet(QLatin1String("QLabel {\n"
"	font: \"Comic Sans MS\";\n"
"	color: blue;\n"
";\n"
"}"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_6 = new QLabel(SamplerControls);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 360, 51, 21));
        label_6->setFont(font1);
        label_6->setStyleSheet(QLatin1String("QLabel {\n"
"	font: \"Comic Sans MS\";\n"
"	color: blue;\n"
";\n"
"}"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_7 = new QLabel(SamplerControls);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 390, 51, 21));
        label_7->setFont(font1);
        label_7->setStyleSheet(QLatin1String("QLabel {\n"
"	font: \"Comic Sans MS\";\n"
"	color: blue;\n"
";\n"
"}"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8 = new QLabel(SamplerControls);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 420, 91, 21));
        label_8->setFont(font1);
        label_8->setStyleSheet(QLatin1String("QLabel {\n"
"	font: \"Comic Sans MS\";\n"
"	color: blue;\n"
";\n"
"}"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        xSpinBox = new QDoubleSpinBox(SamplerControls);
        xSpinBox->setObjectName(QStringLiteral("xSpinBox"));
        xSpinBox->setEnabled(true);
        xSpinBox->setGeometry(QRect(20, 330, 71, 22));
        xSpinBox->setStyleSheet(QLatin1String("QDoubleSpinBox{\n"
"	background-color: rgb(226, 153, 186);\n"
"    border-radius: 5px;\n"
"}\n"
"QDoubleSpinBox::down-button{\n"
"	color: pink;\n"
"    border-radius: 5px;\n"
"}\n"
"QDoubleSpinBox::up-button{\n"
"	color: black;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        xSpinBox->setDecimals(4);
        xSpinBox->setMaximum(1);
        xSpinBox->setSingleStep(0.01);
        xSpinBox->setValue(0.5);
        ySpinBox = new QDoubleSpinBox(SamplerControls);
        ySpinBox->setObjectName(QStringLiteral("ySpinBox"));
        ySpinBox->setEnabled(true);
        ySpinBox->setGeometry(QRect(20, 360, 71, 22));
        ySpinBox->setStyleSheet(QLatin1String("QDoubleSpinBox{\n"
"	background-color: rgb(226, 153, 186);\n"
"    border-radius: 5px;\n"
"}\n"
"QDoubleSpinBox::down-button{\n"
"	color: pink;\n"
"    border-radius: 5px;\n"
"}\n"
"QDoubleSpinBox::up-button{\n"
"	color: black;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        ySpinBox->setDecimals(4);
        ySpinBox->setMaximum(1);
        ySpinBox->setSingleStep(0.01);
        ySpinBox->setValue(0.5);
        zSpinBox = new QDoubleSpinBox(SamplerControls);
        zSpinBox->setObjectName(QStringLiteral("zSpinBox"));
        zSpinBox->setEnabled(true);
        zSpinBox->setGeometry(QRect(20, 390, 71, 22));
        zSpinBox->setStyleSheet(QLatin1String("QDoubleSpinBox{\n"
"	background-color: rgb(226, 153, 186);\n"
"    border-radius: 5px;\n"
"}\n"
"QDoubleSpinBox::down-button{\n"
"	color: pink;\n"
"    border-radius: 5px;\n"
"}\n"
"QDoubleSpinBox::up-button{\n"
"	color: black;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        zSpinBox->setDecimals(4);
        zSpinBox->setMaximum(1);
        zSpinBox->setSingleStep(0.01);
        zSpinBox->setValue(0.5);
        rSpinBox = new QDoubleSpinBox(SamplerControls);
        rSpinBox->setObjectName(QStringLiteral("rSpinBox"));
        rSpinBox->setEnabled(true);
        rSpinBox->setGeometry(QRect(20, 420, 71, 22));
        rSpinBox->setStyleSheet(QLatin1String("QDoubleSpinBox{\n"
"	background-color: rgb(226, 153, 186);\n"
"    border-radius: 5px;\n"
"}\n"
"QDoubleSpinBox::down-button{\n"
"	color: pink;\n"
"    border-radius: 5px;\n"
"}\n"
"QDoubleSpinBox::up-button{\n"
"	color: black;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        rSpinBox->setDecimals(4);
        rSpinBox->setMaximum(1);
        rSpinBox->setSingleStep(0.01);
        rSpinBox->setValue(0.125);
        pushButton_2 = new QPushButton(SamplerControls);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 460, 93, 28));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid rgb(85, 255, 255);\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(255, 170, 255), stop: 1 rgb(255, 85, 255));\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(255, 85, 255), stop: 1 rgb(255, 170, 255));\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}"));

        retranslateUi(SamplerControls);
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), SamplerControls, SLOT(slot_setSampleMode(int)));
        QObject::connect(numSamplesSpinBox, SIGNAL(valueChanged(int)), SamplerControls, SLOT(slot_setSamples(int)));
        QObject::connect(pushButton, SIGNAL(clicked()), SamplerControls, SLOT(slot_buildKDTree()));
        QObject::connect(checkBox, SIGNAL(clicked()), SamplerControls, SLOT(slot_setDisplayGrid()));
        QObject::connect(xSpinBox, SIGNAL(valueChanged(double)), SamplerControls, SLOT(slot_updateSphereX(double)));
        QObject::connect(ySpinBox, SIGNAL(valueChanged(double)), SamplerControls, SLOT(slot_updateSphereY(double)));
        QObject::connect(zSpinBox, SIGNAL(valueChanged(double)), SamplerControls, SLOT(slot_updateSphereZ(double)));
        QObject::connect(rSpinBox, SIGNAL(valueChanged(double)), SamplerControls, SLOT(slot_updateSphereR(double)));
        QObject::connect(pushButton_2, SIGNAL(clicked()), SamplerControls, SLOT(slot_searchPoints()));

        QMetaObject::connectSlotsByName(SamplerControls);
    } // setupUi

    void retranslateUi(QWidget *SamplerControls)
    {
        SamplerControls->setWindowTitle(QApplication::translate("SamplerControls", "k-d Tree Tester Controls", Q_NULLPTR));
        label->setText(QApplication::translate("SamplerControls", "Visualizer Controls", Q_NULLPTR));
        label_2->setText(QApplication::translate("SamplerControls", "Particle Count", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("SamplerControls", "Random", Q_NULLPTR)
         << QApplication::translate("SamplerControls", "Grid", Q_NULLPTR)
         << QApplication::translate("SamplerControls", "Stratified", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("SamplerControls", "Particle Distribution", Q_NULLPTR));
        checkBox->setText(QApplication::translate("SamplerControls", "Display k-d Tree", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SamplerControls", "Build k-d Tree", Q_NULLPTR));
        label_4->setText(QApplication::translate("SamplerControls", "Search Point Controls", Q_NULLPTR));
        label_5->setText(QApplication::translate("SamplerControls", "X", Q_NULLPTR));
        label_6->setText(QApplication::translate("SamplerControls", "Y", Q_NULLPTR));
        label_7->setText(QApplication::translate("SamplerControls", "Z", Q_NULLPTR));
        label_8->setText(QApplication::translate("SamplerControls", "Search Radius", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SamplerControls", "Search Points", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SamplerControls: public Ui_SamplerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMPLERCONTROLS_H
