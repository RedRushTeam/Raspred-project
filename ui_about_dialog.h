/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_about_dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *about_dialog)
    {
        if (about_dialog->objectName().isEmpty())
            about_dialog->setObjectName(QString::fromUtf8("about_dialog"));
        about_dialog->resize(380, 179);
        about_dialog->setWindowTitle(QString::fromUtf8("About"));
        gridLayout = new QGridLayout(about_dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(about_dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/for_logo/rs/logo.png")));

        gridLayout->addWidget(label_3, 0, 0, 1, 2);

        label = new QLabel(about_dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(about_dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);


        retranslateUi(about_dialog);

        QMetaObject::connectSlotsByName(about_dialog);
    } // setupUi

    void retranslateUi(QDialog *about_dialog)
    {
        label_3->setText(QString());
        label->setText(QApplication::translate("about_dialog", "\320\241\320\265\320\273\320\270\320\262\320\260\320\275\320\276\320\262 \320\220. \320\256. 2020", nullptr));
        label_2->setText(QApplication::translate("about_dialog", "Istrebion@yandex.ru", nullptr));
        Q_UNUSED(about_dialog);
    } // retranslateUi

};

namespace Ui {
    class about_dialog: public Ui_about_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
