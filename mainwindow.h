#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#pragma once
#include "graph2.h"
#include "about_dialog.h"
#include "help_window.h"

#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_incrementate_kol_ustr_clicked();

    void on_decrementate_kol_ustr_clicked();

    void on_incrementate_V_pamyati_clicked();

    void on_decrementate_V_pamyati_clicked();

    void on_incrementate_zatrati_CP_na_peremes_clicked();

    void on_decrementate_zatrati_CP_na_peremes_clicked();

    void on_incrementate_zatrati_MD_na_peremes_clicked();

    void on_decrementate_zatrati_CP_na_peremes_2_clicked();

    void on_incrementate_kol_zad_clicked();

    void on_decrementate_kol_zad_clicked();

    void on_incrementate_maksimalnoe_kol_processov_v_zadanii_clicked();

    void on_decrementate_maksimalnoe_kol_processov_v_zadanii_clicked();

    void on_incrementate_maksimalnaya_prodolzitelnost_processa_clicked();

    void on_decrementate_maksimalnaya_prodolzitelnost_processa_clicked();

    void on_incrementate_maksimalniy_razmer_pamyati_processa_clicked();

    void on_decrementate_maksimalniy_razmer_pamyati_processa_clicked();

    void on_create_row_clicked();

    void on_remove_row_clicked();

    void on_create_window_graph_clicked();

    void on_about_clicked();

    void on_clear_all_clicked();

    void on_incrementate_kol_razd_clicked();

    void on_decrementate_kol_razd_clicked();

    void on_incrementate_V1_clicked();

    void on_decrementate_V1_clicked();

    void on_incrementate_V2_clicked();

    void on_decrementate_V2_clicked();

    void on_incrementate_V3_clicked();

    void on_decrementate_V3_clicked();

    void on_incrementate_V4_clicked();

    void on_decrementate_V4_clicked();

    void on_incrementate_V5_clicked();

    void on_decrementate_V5_clicked();

    void on_incrementate_V6_clicked();

    void on_decrementate_V6_clicked();

    void on_incrementate_V7_clicked();

    void on_decrementate_V7_clicked();

    void on_incrementate_V8_clicked();

    void on_decrementate_V8_clicked();

    void on_kol_razd_line_edit_editingFinished();

    void on_incrementate_kol_ustr_str_clicked();

    void on_decrementate_kol_ustr_str_clicked();

    void on_incrementate_V_pamyati_str_clicked();

    void on_decrementate_V_pamyati_str_clicked();

    void on_incrementate_zatrati_CP_na_peremes_str_clicked();

    void on_decrementate_zatrati_CP_na_peremes_str_clicked();

    void on_incrementate_zatrati_MD_na_peremes_str_clicked();

    void on_decrementate_zatrati_MD_na_peremes_str_clicked();

    void on_toolBox_currentChanged(int index);

    void on_incrementate_kol_ustr_rdpr_clicked();

    void on_decrementate_kol_ustr_rdpr_clicked();

    void on_incrementate_V_pamyati_rdpr_clicked();

    void on_decrementate_V_pamyati_rdpr_clicked();

    void on_incrementate_zatrati_CP_na_peremes_rdpr_clicked();

    void on_decrementate_zatrati_CP_na_peremes_rdpr_clicked();

    void on_incrementate_kol_ustr_rstat_clicked();

    void on_decrementate_kol_ustr_rstat_clicked();

    void on_incrementate_kol_ustr_rdnp_clicked();

    void on_decrementate_kol_ustr_rdnp_clicked();

    void on_incrementate_V_pamyati_rdnp_clicked();

    void on_decrementate_V_pamyati_rdnp_clicked();

    void on_help_clicked();

private:
    Ui::MainWindow *ui;
    void create_validators();
    void create_table_UI(const QStringList &headers);
    //void create_ustr(main_class_for_all_types_memory* _main_class_for_all_types_memory);
    int generate_random_int_number(int min, int max) const;
    void push_main_class(main_class_for_all_types_memory* _class_for_push);
    void remove_main_class(int number);     //злой костыль

    void check_for_all_types();
    void check_for_seg();
    void check_for_str();
    void check_for_rstat();
    void check_for_rdpr();
    void check_for_rdnp();

    bool check_V_and_V_process() const;
    bool check_V_and_V_process_for_rstat(std::vector<QLineEdit*> _vec) const;

    void create_all_razd(std::vector<QLineEdit*> _vec, main_class_for_rstat_type_memory* _main_class_for_all_types_memory_for_push);

    void hide_rstat_razmer_razd();
    std::vector<main_class_for_all_types_memory*> list_of_main_class;
};
#endif // MAINWINDOW_H
