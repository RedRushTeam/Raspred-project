#ifndef GRAPH2_H
#define GRAPH2_H
#pragma once
#include "main_class_for_rdnp_type_memory.h"

namespace Ui {
class graph2;
}

class graph2 : public QDialog
{
    Q_OBJECT

public:
    explicit graph2(QWidget *parent = nullptr);
    ~graph2();

    void set_list_of_main_class(std::vector<main_class_for_all_types_memory*> list_of_main_class);
    void change_ui_();

private slots:
    void on_pushButton_clicked();
    void create_series();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    void create_chart_title(QChart *chart);


    QChartView *chartView = nullptr;

    Ui::graph2 *ui;
    std::list<QLineSeries*> list_of_series;
    std::vector<main_class_for_all_types_memory*> vec_of_main_class;
};


#endif // GRAPH2_H
