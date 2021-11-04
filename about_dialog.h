#ifndef ABOUT_DIALOG_H
#define ABOUT_DIALOG_H
#pragma once
#include "list_of_types.h"

namespace Ui {
class about_dialog;
}

class about_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit about_dialog(QWidget *parent = nullptr);
    ~about_dialog();

private:
    Ui::about_dialog *ui;
};

#endif // ABOUT_DIALOG_H
