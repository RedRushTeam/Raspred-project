#include "help_window.h"
#include "ui_help_window.h"

help_window::help_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::help_window)
{
    ui->setupUi(this);

    ui->tabWidget->setCurrentIndex(0);
}

help_window::~help_window()
{
    delete ui;
}
