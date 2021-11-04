/********************************************************************************
** Form generated from reading UI file 'help_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_WINDOW_H
#define UI_HELP_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_help_window
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QTextBrowser *textBrowser_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QTextBrowser *textBrowser_3;
    QWidget *tab_5;
    QGridLayout *gridLayout_4;
    QTextBrowser *textBrowser_4;
    QWidget *tab_6;
    QGridLayout *gridLayout_5;
    QTextBrowser *textBrowser_5;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QTextBrowser *textBrowser_6;

    void setupUi(QDialog *help_window)
    {
        if (help_window->objectName().isEmpty())
            help_window->setObjectName(QString::fromUtf8("help_window"));
        help_window->resize(1191, 694);
        verticalLayout = new QVBoxLayout(help_window);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(help_window);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textBrowser_2 = new QTextBrowser(tab_3);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        gridLayout_2->addWidget(textBrowser_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        textBrowser_3 = new QTextBrowser(tab_4);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));

        gridLayout_3->addWidget(textBrowser_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_4 = new QGridLayout(tab_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        textBrowser_4 = new QTextBrowser(tab_5);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        gridLayout_4->addWidget(textBrowser_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_5 = new QGridLayout(tab_6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        textBrowser_5 = new QTextBrowser(tab_6);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));

        gridLayout_5->addWidget(textBrowser_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_6 = new QGridLayout(tab_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        textBrowser_6 = new QTextBrowser(tab_2);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));

        gridLayout_6->addWidget(textBrowser_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(help_window);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(help_window);
    } // setupUi

    void retranslateUi(QDialog *help_window)
    {
        help_window->setWindowTitle(QApplication::translate("help_window", "Dialog", nullptr));
        textBrowser->setHtml(QApplication::translate("help_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">\320\236\320\241\320\235\320\236\320\222\320\235\320\253\320\225 \320\241\320\236\320\232\320\240\320\220\320\251\320\225\320\235\320\230\320\257</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\203\321\201\321\202\321\200\320\276"
                        "\320\271\321\201\321\202\320\262: </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">KY</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\234\320\260\320\272\321\201. \320\236\320\261\321\212\320\265\320\274 \320\277\320\260\320\274\321\217\321\202\320\270: </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">V</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\227\320\260\321\202\321\200\320\260\321\202\321\213 \320\246\320\237 \320\275\320\260 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 \321\201\320\265\320\263\320\274\320"
                        "\265\320\275\321\202\320\260: </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">zatCP</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\227\320\260\321\202\321\200\320\260\321\202\321\213 \320\234\320\224 \320\275\320\260 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 \321\201\320\265\320\263\320\274\320\265\320\275\321\202\320\260: </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">zatMD</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\320\271: </span><span style=\" "
                        "font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">KZ</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\320\262 \320\262 \320\267\320\260\320\264\320\260\320\275\320\270\320\270: </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxKPZ</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\277\321\200\320\276\320\264\320\276\320\273"
                        "\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260: </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxPP</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \320\277\320\260\320\274\321\217\321\202\320\270 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260: </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxVP</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">C\321\200\320\265\320"
                        "\264\320\275\320\265\320\265 \320\262\321\200\320\265\320\274\321\217 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 \320\276\320\264\320\275\320\276\320\263\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\321\217: </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">srT</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270\321\205 \321\200\320\260\320\267\320\264\320\265\320\273\320\276\320\262: </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">KR</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-"
                        "indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">\320\237\320\240\320\230\320\235\320\246\320\230\320\237 \320\222\320\253\320\237\320\236\320\233\320\235\320\225\320\235\320\230\320\257 \320\240\320\220\320\221\320\236\320\242\320\253</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\235\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\277\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272\320\270 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\320\270 \321\201\321\200\320\265\320\264\320\275\320\265"
                        "\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 \320\276\320\264\320\275\320\276\320\263\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\276\321\202 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\260 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262 \320\277\321\200\320\270 \321\200\320\260\320\267\320\275\321\213\321\205 \320\260\321\200\320\263\321\203\320\274\320\265\320\275\321\202\320\260\321\205. \320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202\321\213 \320\264\320\273\321\217 \320\272\320\260\320\266\320\264\320\276\320\263\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\276\320\277\320\270\321\201\320\260\320\275\321\213 \320\262 \320\272\320\276\320\275\320\272\321\200\320\265\321\202\320\275\321\213\321\205 \320\262\320\272\320\273\320\260\320\264\320\272\320\260\321\205 \320\264\320\260"
                        "\320\275\320\275\320\276\320\263\320\276 \321\200\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\260. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\320\271 \320\275\321\203\320\266\320\275\320\276 \320\270\320\267\320\274\320\265\320\275\321\217\321\202\321\214 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 1 \320\264\320\276 30 \321\201 \321\210\320\260\320\263\320\276\320\274 3-5.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-"
                        "top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\227\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\277\320\276\320\273\320\265\320\271, \320\275\320\265 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\321\216\321\211\320\270\321\205\321\201\321\217 \320\262 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\270 \320\263\321\200\320\260\321\204\320\270\320\272\320\276\320\262:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px;"
                        " margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">KY</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> = 2-5, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">zatCP</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> = 1, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">zatMD</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> = 1, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">V</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> = 1000-2000, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxPP</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> = 30-50, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxVP</span><span style=\" f"
                        "ont-family:'MS Shell Dlg 2'; font-size:10pt;\"> = 30-50, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxKPZ</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> = 2-5.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\232 \320\277\321\200\320\270\320\274\320\265\321\200\321\203, \320\265\321\201\320\273\320\270 \320\260\321\200\320\263\321\203\320\274\320\265\320\275\321\202\320\276\320\274 \320\262 \320\272\320\276\320\275\320\272\321\200\320\265\321\202\320\275\320\276\320\274 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275\320\270\320\270 \321\217\320\262\320\273\321\217\320\265"
                        "\321\202\321\201\321\217 zatCP, \321\202\320\276 \320\265\320\263\320\276 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\270\320\267\320\274\320\265\320\275\321\217\320\265\321\202\321\201\321\217 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 1 \320\264\320\276 9 \321\201 \321\210\320\260\320\263\320\276\320\274 3, \320\260 \320\276\321\201\321\202\320\260\320\273\321\214\320\275\321\213\320\265 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\270 \320\262\321\213\320\263\320\273\321\217\320\264\321\217\321\202 \321\202\320\260\320\272: </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0"
                        "px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">KY</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> = 2-5, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">zatMD</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> = 1, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">V</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> = 1000-2000, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxPP</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> = 30-50, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxVP</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> = 30-50, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxKPZ</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">"
                        " = 2-5.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">\320\224\320\260\320\275\320\275\320\276\320\265 \321\200\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276 \320\275\320\265 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\270\321\201\321\202\320\270\320\275\320\276\320\271 \320\262 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\271 \320\270\320\275\321\201\321\202\320\260\320\275\321\206\320\270\320\270 \320\270 \320\274\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\276 \321\201\320"
                        "\276 \321\201\320\273\320\276\320\262 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("help_window", "\320\236\320\261\321\211\320\265\320\265", nullptr));
        textBrowser_2->setHtml(QApplication::translate("help_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">\320\237\320\240\320\230\320\235\320\246\320\230\320\237 \320\222\320\253\320\237\320\236\320\233\320\235\320\225\320\235\320\230\320\257 \320\240\320\220\320\221\320\236\320\242\320\253</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\237\320\265\321\200\320\262\321\213\320\271 \320\263\321\200\320\260\321\204"
                        "\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxKPZ</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">, \320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 2 \320\264\320\276 8 \321\201 \321\210\320\260\320\263\320\276\320\274 2-3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\222\321\202\320\276\321\200\320\276\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxPP, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 10 \320\264\320\276 500 \321\201 \321\210\320\260\320\263\320\276\320\274 100-150.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\242\321\200\320\265\321\202\320\270\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">zatCP, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 1 \320\264\320\276 9 \321\201 \321"
                        "\210\320\260\320\263\320\276\320\274 3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\247\320\265\321\202\320\262\320\265\321\200\321\202\321\213\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">KY, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265"
                        "\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 2 \320\264\320\276 9 \321\201 \321\210\320\260\320\263\320\276\320\274 2-3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\237\321\217\321\202\321\213\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-famil"
                        "y:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">V, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 100 \320\264\320\276 1000 \321\201 \321\210\320\260\320\263\320\276\320\274 200-300.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">zatCP </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\277\321\200\320\270\320\274\320\265\321\200\320\275\320\276 \321\200\320\260\320\262\320\275\320\276\321\206\320\265"
                        "\320\275\320\265\320\275</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\"> zatMD.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">\320\224\320\260\320\275\320\275\320\276\320\265 \321\200\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276 \320\275\320\265 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\270\321\201\321\202\320\270\320\275\320\276\320\271 \320\262 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\271 \320\270\320\275\321\201\321\202\320\260\320\275\321\206\320\270\320\270 \320\270 \320\274\320\276\320\266\320\265\321\202 \320\261\321\213"
                        "\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\276 \321\201\320\276 \321\201\320\273\320\276\320\262 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("help_window", "\320\241\320\265\320\263\320\274\320\265\320\275\321\202\320\275\321\213\320\271 \321\200\320\265\320\266\320\270\320\274", nullptr));
        textBrowser_3->setHtml(QApplication::translate("help_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">\320\237\320\240\320\230\320\235\320\246\320\230\320\237 \320\222\320\253\320\237\320\236\320\233\320\235\320\225\320\235\320\230\320\257 \320\240\320\220\320\221\320\236\320\242\320\253</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\237\320\265\321\200\320\262\321\213\320\271 \320\263\321\200\320\260\321\204"
                        "\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxKPZ</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">, \320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 2 \320\264\320\276 8 \321\201 \321\210\320\260\320\263\320\276\320\274 2-3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\222\321\202\320\276\321\200\320\276\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxPP, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 10 \320\264\320\276 500 \321\201 \321\210\320\260\320\263\320\276\320\274 100-150.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\242\321\200\320\265\321\202\320\270\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">zatCP, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 1 \320\264\320\276 9 \321\201 \321"
                        "\210\320\260\320\263\320\276\320\274 3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\247\320\265\321\202\320\262\320\265\321\200\321\202\321\213\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">KY, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265"
                        "\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 2 \320\264\320\276 9 \321\201 \321\210\320\260\320\263\320\276\320\274 2-3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\237\321\217\321\202\321\213\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-famil"
                        "y:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">V, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 100 \320\264\320\276 1000 \321\201 \321\210\320\260\320\263\320\276\320\274 200-300.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">zatCP </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\277\321\200\320\270\320\274\320\265\321\200\320\275\320\276 \321\200\320\260\320\262\320\275\320\276\321\206\320\265"
                        "\320\275\320\265\320\275</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\"> zatMD.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">\320\224\320\260\320\275\320\275\320\276\320\265 \321\200\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276 \320\275\320\265 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\270\321\201\321\202\320\270\320\275\320\276\320\271 \320\262 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\271 \320\270\320\275\321\201\321\202\320\260\320\275\321\206\320\270\320\270 \320\270 \320\274\320\276\320\266\320\265\321\202 \320\261\321\213"
                        "\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\276 \321\201\320\276 \321\201\320\273\320\276\320\262 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("help_window", "\320\241\321\202\321\200\320\260\320\275\320\270\321\207\320\275\321\213\320\271 \321\200\320\265\320\266\320\270\320\274", nullptr));
        textBrowser_4->setHtml(QApplication::translate("help_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">\320\237\320\240\320\230\320\235\320\246\320\230\320\237 \320\222\320\253\320\237\320\236\320\233\320\235\320\225\320\235\320\230\320\257 \320\240\320\220\320\221\320\236\320\242\320\253</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\237\320\265\321\200\320\262\321\213\320\271 \320\263\321\200\320\260\321\204"
                        "\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxKPZ</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">, \320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 2 \320\264\320\276 8 \321\201 \321\210\320\260\320\263\320\276\320\274 2-3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\222\321\202\320\276\321\200\320\276\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxPP, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 10 \320\264\320\276 500 \321\201 \321\210\320\260\320\263\320\276\320\274 100-150.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\242\321\200\320\265\321\202\320\270\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">KY, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 2 \320\264\320\276 9 \321\201 \321\210"
                        "\320\260\320\263\320\276\320\274 2-3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\247\320\265\321\202\320\262\320\265\321\200\321\202\321\213\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">V, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\321\201\320\273\320\265\320\264"
                        "\321\203\320\265\321\202 \320\264\320\276\320\261\320\260\320\262\320\273\321\217\321\202\321\214 \321\200\320\260\320\267\320\264\320\265\320\273\321\213, \321\200\320\260\320\267\320\274\320\265\321\200\320\276\320\274 \320\261\320\276\320\273\320\265\320\265 \321\207\320\265\320\274 \320\274\320\260\321\201\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 \320\277\320\260\320\274\321\217\321\202\320\270 \320\262\321\201\320\265\320\263\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\321\217, \320\276\321\202 2 \320\264\320\276 8 \321\200\320\260\320\267\320\264\320\265\320\273\320\276\320\262 \321\201 \321\210\320\260\320\263\320\276\320\274 2-3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">\320\224\320\260\320\275\320\275\320\276\320\265 \321\200\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276 \320\275\320\265 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\270\321\201\321\202\320\270\320\275\320\276\320\271 \320\262 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\271 \320\270\320\275\321\201\321\202\320\260\320\275\321\206\320\270\320\270 \320\270 \320\274\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\276 \321\201\320\276 \321\201\320\273\320\276\320\262 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell D"
                        "lg 2'; font-size:10pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("help_window", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \321\201\321\202\320\260\321\202\320\270\321\207\320\275\321\213\320\274\320\270 \321\200\320\260\320\267\320\264\320\265\320\273\320\260\320\274\320\270", nullptr));
        textBrowser_5->setHtml(QApplication::translate("help_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">\320\237\320\240\320\230\320\235\320\246\320\230\320\237 \320\222\320\253\320\237\320\236\320\233\320\235\320\225\320\235\320\230\320\257 \320\240\320\220\320\221\320\236\320\242\320\253</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\237\320\265\321\200\320\262\321\213\320\271 \320\263\321\200\320\260\321\204"
                        "\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxKPZ</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">, \320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 2 \320\264\320\276 8 \321\201 \321\210\320\260\320\263\320\276\320\274 2-3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\222\321\202\320\276\321\200\320\276\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxPP, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 10 \320\264\320\276 500 \321\201 \321\210\320\260\320\263\320\276\320\274 100-150.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\242\321\200\320\265\321\202\320\270\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">zatCP, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 1 \320\264\320\276 9 \321\201 \321"
                        "\210\320\260\320\263\320\276\320\274 3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\247\320\265\321\202\320\262\320\265\321\200\321\202\321\213\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">KY, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265"
                        "\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 2 \320\264\320\276 9 \321\201 \321\210\320\260\320\263\320\276\320\274 2-3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\237\321\217\321\202\321\213\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-famil"
                        "y:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">V, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 100 \320\264\320\276 1000 \321\201 \321\210\320\260\320\263\320\276\320\274 200-300.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">\320\224\320\260\320\275\320\275\320\276\320\265 \321\200\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276 \320\275\320\265 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321"
                        "\217 \320\270\321\201\321\202\320\270\320\275\320\276\320\271 \320\262 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\271 \320\270\320\275\321\201\321\202\320\260\320\275\321\206\320\270\320\270 \320\270 \320\274\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\276 \321\201\320\276 \321\201\320\273\320\276\320\262 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("help_window", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\264\320\270\320\275\320\260\320\274\320\270\321\207\320\265\321\201\320\272\320\270\320\274\320\270 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\260\320\265\320\274\321\213\320\274\320\270 \321\200\320\260\320\267\320\264\320\265\320\273\320\260\320\274\320\270", nullptr));
        textBrowser_6->setHtml(QApplication::translate("help_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">\320\237\320\240\320\230\320\235\320\246\320\230\320\237 \320\222\320\253\320\237\320\236\320\233\320\235\320\225\320\235\320\230\320\257 \320\240\320\220\320\221\320\236\320\242\320\253</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\237\320\265\321\200\320\262\321\213\320\271 \320\263\321\200\320\260\321\204"
                        "\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxKPZ</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">, \320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 2 \320\264\320\276 8 \321\201 \321\210\320\260\320\263\320\276\320\274 2-3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\222\321\202\320\276\321\200\320\276\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">maxPP, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 10 \320\264\320\276 500 \321\201 \321\210\320\260\320\263\320\276\320\274 100-150.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\242\321\200\320\265\321\202\320\270\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">KY, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 2 \320\264\320\276 9 \321\201 \321\210"
                        "\320\260\320\263\320\276\320\274 2-3.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\247\320\265\321\202\320\262\320\265\321\200\321\202\321\213\320\271 \320\263\321\200\320\260\321\204\320\270\320\272:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202 </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">V, </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\320\270\320\267\320\274\320\265"
                        "\320\275\321\217\320\265\320\274\321\213\320\271 \320\262 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\265 \320\276\321\202 100 \320\264\320\276 1000 \321\201 \321\210\320\260\320\263\320\276\320\274 200-300.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-style:italic;\">\320\224\320\260\320\275\320\275\320\276\320\265 \321\200\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276 \320\275\320\265 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\270\321\201\321\202\320\270\320\275\320\276\320\271 \320\262 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\271 \320\270\320\275"
                        "\321\201\321\202\320\260\320\275\321\206\320\270\320\270 \320\270 \320\274\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\276 \321\201\320\276 \321\201\320\273\320\276\320\262 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("help_window", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\260\321\201\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\264\320\270\320\275\320\260\320\274\320\270\321\207\320\265\321\201\320\272\320\270\320\274\320\270 \320\275\320\265\320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\260\320\265\320\274\321\213\320\274\320\270 \321\200\320\260\320\267\320\264\320\265\320\273\320\260\320\274\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class help_window: public Ui_help_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_WINDOW_H
