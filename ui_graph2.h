/********************************************************************************
** Form generated from reading UI file 'graph2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH2_H
#define UI_GRAPH2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_graph2
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *Chart_layout;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_zatCP;
    QRadioButton *radioButton_KR;
    QRadioButton *radioButton_zatMD;
    QRadioButton *radioButton_maxPP;
    QRadioButton *radioButton_KY;
    QRadioButton *radioButton_V;
    QRadioButton *radioButton_maxKP;
    QRadioButton *radioButton_maxVP;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *graph2)
    {
        if (graph2->objectName().isEmpty())
            graph2->setObjectName(QString::fromUtf8("graph2"));
        graph2->resize(1366, 768);
        graph2->setCursor(QCursor(Qt::ArrowCursor));
        graph2->setModal(true);
        gridLayout_2 = new QGridLayout(graph2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Chart_layout = new QVBoxLayout();
        Chart_layout->setObjectName(QString::fromUtf8("Chart_layout"));

        gridLayout_2->addLayout(Chart_layout, 0, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioButton_zatCP = new QRadioButton(graph2);
        radioButton_zatCP->setObjectName(QString::fromUtf8("radioButton_zatCP"));
        radioButton_zatCP->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\\n"));

        gridLayout->addWidget(radioButton_zatCP, 1, 1, 1, 1);

        radioButton_KR = new QRadioButton(graph2);
        radioButton_KR->setObjectName(QString::fromUtf8("radioButton_KR"));
        radioButton_KR->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\\n"));

        gridLayout->addWidget(radioButton_KR, 3, 1, 1, 1);

        radioButton_zatMD = new QRadioButton(graph2);
        radioButton_zatMD->setObjectName(QString::fromUtf8("radioButton_zatMD"));
        radioButton_zatMD->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\\n"));

        gridLayout->addWidget(radioButton_zatMD, 2, 1, 1, 1);

        radioButton_maxPP = new QRadioButton(graph2);
        radioButton_maxPP->setObjectName(QString::fromUtf8("radioButton_maxPP"));
        radioButton_maxPP->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\n"
""));
        radioButton_maxPP->setChecked(true);

        gridLayout->addWidget(radioButton_maxPP, 1, 0, 1, 1);

        radioButton_KY = new QRadioButton(graph2);
        radioButton_KY->setObjectName(QString::fromUtf8("radioButton_KY"));
        radioButton_KY->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\\n"));

        gridLayout->addWidget(radioButton_KY, 4, 0, 1, 1);

        radioButton_V = new QRadioButton(graph2);
        radioButton_V->setObjectName(QString::fromUtf8("radioButton_V"));
        radioButton_V->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\n"
""));

        gridLayout->addWidget(radioButton_V, 5, 0, 1, 1);

        radioButton_maxKP = new QRadioButton(graph2);
        radioButton_maxKP->setObjectName(QString::fromUtf8("radioButton_maxKP"));
        radioButton_maxKP->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\n"
""));

        gridLayout->addWidget(radioButton_maxKP, 2, 0, 1, 1);

        radioButton_maxVP = new QRadioButton(graph2);
        radioButton_maxVP->setObjectName(QString::fromUtf8("radioButton_maxVP"));
        radioButton_maxVP->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\n"
""));

        gridLayout->addWidget(radioButton_maxVP, 3, 0, 1, 1);

        label = new QLabel(graph2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\n"
""));

        gridLayout->addWidget(label, 0, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 1, 0, 3, 1);

        pushButton_3 = new QPushButton(graph2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\n"
"  text-decoration: none; /* \321\203\320\261\320\270\321\200\320\260\321\202\321\214 \320\277\320\276\320\264\321\207\321\221\321\200\320\272\320\270\320\262\320\260\320\275\320\270\320\265 \321\203 \321\201\321\201\321\213\320\273\320\276\320\272 */\n"
"  user-select: none; /* \321\203\320\261\320\270\321\200\320\260\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"  padding: .7em 1.5em; /* \320\276\321\202\321\201\321\202\321\203\320\277 \320\276\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"\n"
"this.hover { background: rgb(232,95,76); } /* \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 \320\274\321\213\321\210\320\272\320\270 */\n"
"this.active { background: rgb(152,15,0); } /* \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270"
                        "\320\270 */"));

        gridLayout_2->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(graph2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\n"
"  text-decoration: none; /* \321\203\320\261\320\270\321\200\320\260\321\202\321\214 \320\277\320\276\320\264\321\207\321\221\321\200\320\272\320\270\320\262\320\260\320\275\320\270\320\265 \321\203 \321\201\321\201\321\213\320\273\320\276\320\272 */\n"
"  user-select: none; /* \321\203\320\261\320\270\321\200\320\260\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"  padding: .7em 1.5em; /* \320\276\321\202\321\201\321\202\321\203\320\277 \320\276\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"\n"
"this.hover { background: rgb(232,95,76); } /* \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 \320\274\321\213\321\210\320\272\320\270 */\n"
"this.active { background: rgb(152,15,0); } /* \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270"
                        "\320\270 */"));

        gridLayout_2->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton = new QPushButton(graph2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\n"
"  text-decoration: none; /* \321\203\320\261\320\270\321\200\320\260\321\202\321\214 \320\277\320\276\320\264\321\207\321\221\321\200\320\272\320\270\320\262\320\260\320\275\320\270\320\265 \321\203 \321\201\321\201\321\213\320\273\320\276\320\272 */\n"
"  user-select: none; /* \321\203\320\261\320\270\321\200\320\260\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"  padding: .7em 1.5em; /* \320\276\321\202\321\201\321\202\321\203\320\277 \320\276\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"\n"
"this.hover { background: rgb(232,95,76); } /* \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 \320\274\321\213\321\210\320\272\320\270 */\n"
"this.active { background: rgb(152,15,0); } /* \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270"
                        "\320\270 */"));

        gridLayout_2->addWidget(pushButton, 3, 1, 1, 1);


        retranslateUi(graph2);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(graph2);
    } // setupUi

    void retranslateUi(QDialog *graph2)
    {
        graph2->setWindowTitle(QApplication::translate("graph2", "Dialog", nullptr));
        radioButton_zatCP->setText(QApplication::translate("graph2", "\320\227\320\260\321\202\321\200\320\260\321\202\321\213 \320\246\320\237 \320\275\320\260 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 \321\200\320\260\320\267\320\264\320\265\320\273\320\260/\321\201\320\265\320\263\320\274\320\265\320\275\321\202\320\260", nullptr));
        radioButton_KR->setText(QApplication::translate("graph2", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\200\320\260\320\267\320\264\320\265\320\273\320\276\320\262", nullptr));
        radioButton_zatMD->setText(QApplication::translate("graph2", "\320\227\320\260\321\202\321\200\320\260\321\202\321\213 \320\234\320\224 \320\275\320\260 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 \321\200\320\260\320\267\320\264\320\265\320\273\320\260/\321\201\320\265\320\263\320\274\320\265\320\275\321\202\320\260", nullptr));
        radioButton_maxPP->setText(QApplication::translate("graph2", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\277\321\200\320\276\320\264\320\276\320\273\320\266. \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260", nullptr));
        radioButton_KY->setText(QApplication::translate("graph2", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262", nullptr));
        radioButton_V->setText(QApplication::translate("graph2", "\320\236\320\261\321\212\320\265\320\274 \320\277\320\260\320\274\321\217\321\202\320\270 (\320\224\320\273\321\217 rstat \321\201\321\203\320\274\320\274\320\260 \320\276\320\261\321\212\320\265\320\274\320\276\320\262 \320\262\321\201\320\265\321\205 \321\200\320\260\320\267\320\264\320\265\320\273\320\276\320\262)", nullptr));
        radioButton_maxKP->setText(QApplication::translate("graph2", "\320\234\320\260\320\272\321\201. \321\207\320\270\321\201\320\273\320\276 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\320\262 \320\262 \320\267\320\260\320\264\320\260\320\275\320\270\320\270", nullptr));
        radioButton_maxVP->setText(QApplication::translate("graph2", "\320\234\320\260\320\272\321\201. \320\276\320\261\321\212\320\265\320\274 \320\277\320\260\320\274\321\217\321\202\320\270 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260", nullptr));
        label->setText(QApplication::translate("graph2", "                                                                                           \320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202", nullptr));
        pushButton_3->setText(QApplication::translate("graph2", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214 \320\274\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        pushButton_2->setText(QApplication::translate("graph2", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214 \320\274\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        pushButton->setText(QApplication::translate("graph2", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graph2: public Ui_graph2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH2_H
