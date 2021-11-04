#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //работа с таблицей
    this->create_table_UI(QStringList()  << "KY"
                          << "V"
                          << "zatCP"
                          << "zatMD"
                          << "KZ"
                          << "maxKPZ"
                          << "maxPP"
                          << "maxVP"
                          << "srT"
                          );

    this->create_validators();

    this->setWindowTitle("Распределение памяти");
    //this->hide_rstat_razmer_razd();

    ui->toolBox->setCurrentIndex(0);

    connect(ui->decrementate_kol_ustr_seg, SIGNAL(clicked()), this, SLOT(on_decrementate_kol_ustr_clicked()));
    connect(ui->incrementate_kol_ustr_seg, SIGNAL(clicked()), this, SLOT(on_incrementate_kol_ustr_clicked()));
    connect(ui->incrementate_V_pamyati_seg, SIGNAL(clicked()), this, SLOT(on_incrementate_V_pamyati_clicked()));
    connect(ui->decrementate_V_pamyati_seg, SIGNAL(clicked()), this, SLOT(on_decrementate_V_pamyati_clicked()));
    connect(ui->incrementate_zatrati_CP_na_peremes_seg, SIGNAL(clicked()), this, SLOT(on_incrementate_zatrati_CP_na_peremes_clicked()));
    connect(ui->decrementate_zatrati_CP_na_peremes_seg, SIGNAL(clicked()), this, SLOT(on_decrementate_zatrati_CP_na_peremes_clicked()));
    connect(ui->incrementate_zatrati_MD_na_peremes_seg, SIGNAL(clicked()), this, SLOT(on_incrementate_zatrati_MD_na_peremes_clicked()));
    connect(ui->decrementate_zatrati_MD_na_peremes_seg, SIGNAL(clicked()), this, SLOT(on_decrementate_zatrati_CP_na_peremes_2_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// создаем и настраиваем таблицу
void MainWindow::create_table_UI(const QStringList &headers)
{
       ui->table->setColumnCount(headers.size()); // Указываем число колонок
       ui->table->setShowGrid(true); // Включаем сетку
       // Разрешаем выделение только одного элемента
       ui->table->setSelectionMode(QAbstractItemView::SingleSelection);
       // Разрешаем выделение построчно
       ui->table->setSelectionBehavior(QAbstractItemView::SelectRows);
       // Устанавливаем заголовки колонок
       ui->table->setHorizontalHeaderLabels(headers);
       // Растягиваем последнюю колонку на всё доступное пространство
       ui->table->horizontalHeader()->setStretchLastSection(true);
       // Ресайзим колонки по содержимому
       ui->table->resizeColumnsToContents();
}

// создаем и настраиваем валидаторы для lineedit
void MainWindow::create_validators()
{
    //валидаторы для заданий
    ui->kolichestvo_ustroistv_seg_line_edit->setValidator(new QIntValidator(2, 9, this));
    ui->kolichestvo_zadaniy_line_edit->setValidator(new QIntValidator(1, 30, this));
    ui->maksimalniy_razmer_pamyati_processa_line_edit->setValidator(new QIntValidator(10, 500, this));
    ui->maksimalnoe_kol_processov_v_zadanii_line_edit->setValidator(new QIntValidator(2, 8, this));
    ui->maksimalnaya_prodolzitelnost_processa_line_edit->setValidator(new QIntValidator(10, 1000, this));

    //валидаторы для seg
    ui->V_pamyati_line_edit_seg->setValidator(new QIntValidator(100, 2000, this));
    ui->zatrati_CP_seg_line_edit->setValidator(new QIntValidator(0, 10, this));
    ui->zatrati_MD_line_edit->setValidator(new QIntValidator(0, 10, this));

    //валидаторы для str
    ui->kolichestvo_ustroistv_str_line_edit->setValidator(new QIntValidator(2, 8, this));
    ui->V_pamyati_line_edit_str->setValidator(new QIntValidator(100, 2000, this));
    ui->zatrati_CP_str_line_edit->setValidator(new QIntValidator(0, 10, this));
    ui->zatrati_MD_line_edit_str->setValidator(new QIntValidator(0, 10, this));

    //валидаторы для rstat
    ui->kol_razd_line_edit->setValidator(new QIntValidator(2, 8, this));
    ui->kolichestvo_ustroistv_rstat_line_edit->setValidator(new QIntValidator(2, 8, this));
    ui->lineEdit_V1->setValidator(new QIntValidator(20, 200, this));
    ui->lineEdit_V2->setValidator(new QIntValidator(20, 200, this));
    ui->lineEdit_V3->setValidator(new QIntValidator(20, 200, this));
    ui->lineEdit_V4->setValidator(new QIntValidator(20, 200, this));
    ui->lineEdit_V5->setValidator(new QIntValidator(20, 200, this));
    ui->lineEdit_V6->setValidator(new QIntValidator(20, 200, this));
    ui->lineEdit_V7->setValidator(new QIntValidator(20, 200, this));
    ui->lineEdit_V8->setValidator(new QIntValidator(20, 200, this));

    //валидаторы для rdpr
    ui->kolichestvo_ustroistv_rdpr_line_edit->setValidator(new QIntValidator(2, 8, this));
    ui->V_pamyati_line_edit_rdpr->setValidator(new QIntValidator(100, 2000, this));
    ui->zatrati_CP_rdpr_line_edit->setValidator(new QIntValidator(1, 10, this));

    //валидаторы для rdnp
    ui->kolichestvo_ustroistv_rdnp_line_edit->setValidator(new QIntValidator(2, 8, this));
    ui->V_pamyati_line_edit_rdnp->setValidator(new QIntValidator(100, 2000, this));
}

void MainWindow::on_incrementate_kol_ustr_clicked()
{
    if(ui->kolichestvo_ustroistv_seg_line_edit->text().toInt() < 9)
        ui->kolichestvo_ustroistv_seg_line_edit->setText(QString::number(ui->kolichestvo_ustroistv_seg_line_edit->text().toInt() + 1));
    else
        ui->kolichestvo_ustroistv_seg_line_edit->setText(QString::number(9));
}

void MainWindow::on_decrementate_kol_ustr_clicked()
{
    if(ui->kolichestvo_ustroistv_seg_line_edit->text().toInt() > 2)
        ui->kolichestvo_ustroistv_seg_line_edit->setText(QString::number(ui->kolichestvo_ustroistv_seg_line_edit->text().toInt() - 1));
    else
        ui->kolichestvo_ustroistv_seg_line_edit->setText(QString::number(2));
}

void MainWindow::on_incrementate_V_pamyati_clicked()
{
    if(ui->V_pamyati_line_edit_seg->text().toInt() <= 1900)
        ui->V_pamyati_line_edit_seg->setText(QString::number(ui->V_pamyati_line_edit_seg->text().toInt() + 100));
    else
        ui->V_pamyati_line_edit_seg->setText(QString::number(2000));
}

void MainWindow::on_decrementate_V_pamyati_clicked()
{
    if(ui->V_pamyati_line_edit_seg->text().toInt() > 100)
        ui->V_pamyati_line_edit_seg->setText(QString::number(ui->V_pamyati_line_edit_seg->text().toInt() - 100));
    else
        ui->V_pamyati_line_edit_seg->setText(QString::number(100));
}

void MainWindow::on_incrementate_zatrati_CP_na_peremes_clicked()
{
    if(ui->zatrati_CP_seg_line_edit->text().toInt() <= 9)
        ui->zatrati_CP_seg_line_edit->setText(QString::number(ui->zatrati_CP_seg_line_edit->text().toInt() + 1));
    else
        ui->zatrati_CP_seg_line_edit->setText(QString::number(10));
}

void MainWindow::on_decrementate_zatrati_CP_na_peremes_clicked()
{
    if(ui->zatrati_CP_seg_line_edit->text().toInt() >= 1)
        ui->zatrati_CP_seg_line_edit->setText(QString::number(ui->zatrati_CP_seg_line_edit->text().toInt() - 1));
    else
        ui->zatrati_CP_seg_line_edit->setText(QString::number(0));
}

void MainWindow::on_incrementate_zatrati_MD_na_peremes_clicked()
{
    if(ui->zatrati_MD_line_edit->text().toInt() <= 9)
        ui->zatrati_MD_line_edit->setText(QString::number(ui->zatrati_MD_line_edit->text().toInt() + 1));
    else
        ui->zatrati_MD_line_edit->setText(QString::number(10));
}

void MainWindow::on_decrementate_zatrati_CP_na_peremes_2_clicked()
{
    if(ui->zatrati_MD_line_edit->text().toInt() >= 1)
        ui->zatrati_MD_line_edit->setText(QString::number(ui->zatrati_MD_line_edit->text().toInt() - 1));
    else
        ui->zatrati_MD_line_edit->setText(QString::number(0));
}


void MainWindow::on_decrementate_kol_zad_clicked()
{
    if(ui->kolichestvo_zadaniy_line_edit->text().toInt() >= 2)
        ui->kolichestvo_zadaniy_line_edit->setText(QString::number(ui->kolichestvo_zadaniy_line_edit->text().toInt() - 1));
    else
        ui->kolichestvo_zadaniy_line_edit->setText(QString::number(1));
}

void MainWindow::on_incrementate_maksimalnoe_kol_processov_v_zadanii_clicked()
{
    if(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt() <= 7)
        ui->maksimalnoe_kol_processov_v_zadanii_line_edit->setText(QString::number(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt() + 1));
    else
        ui->maksimalnoe_kol_processov_v_zadanii_line_edit->setText(QString::number(8));
}

void MainWindow::on_decrementate_maksimalnoe_kol_processov_v_zadanii_clicked()
{
    if(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt() >= 2)
        ui->maksimalnoe_kol_processov_v_zadanii_line_edit->setText(QString::number(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt() - 1));
    else
        ui->maksimalnoe_kol_processov_v_zadanii_line_edit->setText(QString::number(1));
}

void MainWindow::on_incrementate_maksimalnaya_prodolzitelnost_processa_clicked()
{
    if(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text().toInt() <= 995)
        ui->maksimalnaya_prodolzitelnost_processa_line_edit->setText(QString::number(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text().toInt() + 5));
    else
        ui->maksimalnaya_prodolzitelnost_processa_line_edit->setText(QString::number(1000));
}

void MainWindow::on_decrementate_maksimalnaya_prodolzitelnost_processa_clicked()
{
    if(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text().toInt() >= 15)
        ui->maksimalnaya_prodolzitelnost_processa_line_edit->setText(QString::number(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text().toInt() - 5));
    else
        ui->maksimalnaya_prodolzitelnost_processa_line_edit->setText(QString::number(10));
}

void MainWindow::on_incrementate_maksimalniy_razmer_pamyati_processa_clicked()
{
    if(ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt() <= 495)
        ui->maksimalniy_razmer_pamyati_processa_line_edit->setText(QString::number(ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt() + 5));
    else
        ui->maksimalniy_razmer_pamyati_processa_line_edit->setText(QString::number(500));
}

void MainWindow::on_decrementate_maksimalniy_razmer_pamyati_processa_clicked()
{
    if(ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt() >= 15)
        ui->maksimalniy_razmer_pamyati_processa_line_edit->setText(QString::number(ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt() - 5));
    else
        ui->maksimalniy_razmer_pamyati_processa_line_edit->setText(QString::number(10));
}

void MainWindow::on_incrementate_kol_zad_clicked()
{
    if(ui->kolichestvo_zadaniy_line_edit->text().toInt() < 30)
        ui->kolichestvo_zadaniy_line_edit->setText(QString::number(ui->kolichestvo_zadaniy_line_edit->text().toInt() + 1));
    else
        ui->kolichestvo_zadaniy_line_edit->setText(QString::number(30));
}


bool MainWindow::check_V_and_V_process() const
{
    if(ui->toolBox->currentIndex() == 0){
        if(ui->V_pamyati_line_edit_seg->text().toInt() < ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt())
            return true;
        return false;
    }

    if(ui->toolBox->currentIndex() == 1){
        if(ui->V_pamyati_line_edit_str->text().toInt() < ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt())
            return true;
        return false;
    }

    if(ui->toolBox->currentIndex() == 3){
        if(ui->V_pamyati_line_edit_rdpr->text().toInt() < ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt() * ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt())
            return true;
        return false;
    }

    if(ui->toolBox->currentIndex() == 4){
        if(ui->V_pamyati_line_edit_rdnp->text().toInt() < ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt() * ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt())
            return true;
        return false;
    }
}

// добавляем всякие элементы в табличку
void MainWindow::on_create_row_clicked()
{
    this->check_for_all_types();

    if(ui->toolBox->currentIndex() == 0){
        this->check_for_seg();

        if(this->check_V_and_V_process()){
            QMessageBox::warning(this, "Ошибка!", "Общий объем памяти не может быть меньше максимального объема памяти одного процесса!");
            return;
        }

        int counter_of_rows = ui->table->rowCount();

        ui->table->insertRow(counter_of_rows);
        ui->table->setItem(counter_of_rows, KY_, new QTableWidgetItem(ui->kolichestvo_ustroistv_seg_line_edit->text()));
        ui->table->setItem(counter_of_rows, V_, new QTableWidgetItem(ui->V_pamyati_line_edit_seg->text()));
        ui->table->setItem(counter_of_rows, zatCP_, new QTableWidgetItem(ui->zatrati_CP_seg_line_edit->text()));
        ui->table->setItem(counter_of_rows, zatMD_, new QTableWidgetItem(ui->zatrati_MD_line_edit->text()));
        ui->table->setItem(counter_of_rows, KZ_, new QTableWidgetItem(ui->kolichestvo_zadaniy_line_edit->text()));
        ui->table->setItem(counter_of_rows, maxKPZ_, new QTableWidgetItem(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text()));
        ui->table->setItem(counter_of_rows, maxPP_, new QTableWidgetItem(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text()));
        ui->table->setItem(counter_of_rows, maxVP_, new QTableWidgetItem(ui->maksimalniy_razmer_pamyati_processa_line_edit->text()));

        main_class_for_seg_type_memory* _main_class_for_all_types_memory_for_push = new main_class_for_seg_type_memory();
        _main_class_for_all_types_memory_for_push->set_type_of_raspred(seg_);
        _main_class_for_all_types_memory_for_push->set_KY(ui->kolichestvo_ustroistv_seg_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_V(ui->V_pamyati_line_edit_seg->text().toInt());
        _main_class_for_all_types_memory_for_push->set_zatCP(ui->zatrati_CP_seg_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_zatMD(ui->zatrati_MD_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_KZ(ui->kolichestvo_zadaniy_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxPP(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxVP(ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxKPZ(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt());

        _main_class_for_all_types_memory_for_push->create_ustr();
        _main_class_for_all_types_memory_for_push->create_all_zad_and_process();
        this->push_main_class(_main_class_for_all_types_memory_for_push);
        ui->table->setItem(counter_of_rows, srT_, new QTableWidgetItem(QString::number(_main_class_for_all_types_memory_for_push->run())));
        ++counter_of_rows;
    }

    if(ui->toolBox->currentIndex() == 1){
        this->check_for_str();

        if(this->check_V_and_V_process()){
            QMessageBox::warning(this, "Ошибка!", "Общий объем памяти не может быть меньше максимального объема памяти одного процесса!");
            return;
        }

        int counter_of_rows = ui->table->rowCount();

        ui->table->insertRow(counter_of_rows);
        ui->table->setItem(counter_of_rows, KY_, new QTableWidgetItem(ui->kolichestvo_ustroistv_str_line_edit->text()));
        ui->table->setItem(counter_of_rows, V_, new QTableWidgetItem(ui->V_pamyati_line_edit_str->text()));
        ui->table->setItem(counter_of_rows, zatCP_, new QTableWidgetItem(ui->zatrati_CP_str_line_edit->text()));
        ui->table->setItem(counter_of_rows, zatMD_, new QTableWidgetItem(ui->zatrati_MD_line_edit_str->text()));
        ui->table->setItem(counter_of_rows, KZ_, new QTableWidgetItem(ui->kolichestvo_zadaniy_line_edit->text()));
        ui->table->setItem(counter_of_rows, maxKPZ_, new QTableWidgetItem(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text()));
        ui->table->setItem(counter_of_rows, maxPP_, new QTableWidgetItem(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text()));
        ui->table->setItem(counter_of_rows, maxVP_, new QTableWidgetItem(ui->maksimalniy_razmer_pamyati_processa_line_edit->text()));

        main_class_for_str_type_memory* _main_class_for_all_types_memory_for_push = new main_class_for_str_type_memory();
        _main_class_for_all_types_memory_for_push->set_type_of_raspred(str_);
        _main_class_for_all_types_memory_for_push->set_KY(ui->kolichestvo_ustroistv_str_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_V(ui->V_pamyati_line_edit_str->text().toInt());
        _main_class_for_all_types_memory_for_push->set_zatCP(ui->zatrati_CP_str_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_zatMD(ui->zatrati_MD_line_edit_str->text().toInt());
        _main_class_for_all_types_memory_for_push->set_KZ(ui->kolichestvo_zadaniy_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxPP(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxVP(ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxKPZ(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt());

        _main_class_for_all_types_memory_for_push->create_ustr();
        _main_class_for_all_types_memory_for_push->create_all_zad_and_process();
        this->push_main_class(_main_class_for_all_types_memory_for_push);
        ui->table->setItem(counter_of_rows, srT_, new QTableWidgetItem(QString::number(_main_class_for_all_types_memory_for_push->run())));
        ++counter_of_rows;
    }
    if(ui->toolBox->currentIndex() == 2){

        this->check_for_rstat();

        //создадитм вектор с line edit для удобства
        std::vector<QLineEdit*> vec_of_qlineedit;
        vec_of_qlineedit.push_back(ui->lineEdit_V1);
        vec_of_qlineedit.push_back(ui->lineEdit_V2);
        vec_of_qlineedit.push_back(ui->lineEdit_V3);
        vec_of_qlineedit.push_back(ui->lineEdit_V4);
        vec_of_qlineedit.push_back(ui->lineEdit_V5);
        vec_of_qlineedit.push_back(ui->lineEdit_V6);
        vec_of_qlineedit.push_back(ui->lineEdit_V7);
        vec_of_qlineedit.push_back(ui->lineEdit_V8);

        if(this->check_V_and_V_process_for_rstat(vec_of_qlineedit)){
            QMessageBox::warning(this, "Ошибка!", "Наибольший объем памяти раздела не может быть меньше максимального объема памяти одного задания!");
            return;
        }

        int all_V_pamyati = 0;

        int counter_of_razd = 0;

        for(auto obj : vec_of_qlineedit){

            if(ui->kol_razd_line_edit->text().toInt() == counter_of_razd)
                break;

            all_V_pamyati += obj->text().toInt();
            ++counter_of_razd;
        }

        int counter_of_rows = ui->table->rowCount();

        ui->table->insertRow(counter_of_rows);
        ui->table->setItem(counter_of_rows, 0, new QTableWidgetItem(ui->kolichestvo_ustroistv_rstat_line_edit->text()));
        ui->table->setItem(counter_of_rows, 1, new QTableWidgetItem(QString::number(all_V_pamyati)));
        ui->table->setItem(counter_of_rows, 2, new QTableWidgetItem(ui->kol_razd_line_edit->text()));
        ui->table->setItem(counter_of_rows, 3, new QTableWidgetItem(ui->kolichestvo_zadaniy_line_edit->text()));
        ui->table->setItem(counter_of_rows, 4, new QTableWidgetItem(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text()));
        ui->table->setItem(counter_of_rows, 5, new QTableWidgetItem(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text()));
        ui->table->setItem(counter_of_rows, 6, new QTableWidgetItem(ui->maksimalniy_razmer_pamyati_processa_line_edit->text()));

        main_class_for_rstat_type_memory* _main_class_for_all_types_memory_for_push = new main_class_for_rstat_type_memory();
        this->create_all_razd(vec_of_qlineedit, _main_class_for_all_types_memory_for_push);
        _main_class_for_all_types_memory_for_push->set_type_of_raspred(rstat_);
        _main_class_for_all_types_memory_for_push->set_V(all_V_pamyati);
        _main_class_for_all_types_memory_for_push->set_KY(ui->kolichestvo_ustroistv_rstat_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_kol_razd(ui->kol_razd_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_KZ(ui->kolichestvo_zadaniy_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxPP(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxVP(ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxKPZ(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt());

        _main_class_for_all_types_memory_for_push->create_ustr();
        _main_class_for_all_types_memory_for_push->create_all_zad_and_process();
        this->push_main_class(_main_class_for_all_types_memory_for_push);
        ui->table->setItem(counter_of_rows, 7, new QTableWidgetItem(QString::number(_main_class_for_all_types_memory_for_push->run())));
        ++counter_of_rows;
    }

    if(ui->toolBox->currentIndex() == 3){

        this->check_for_rdpr();

        if(this->check_V_and_V_process()){
            QMessageBox::warning(this, "Ошибка!", "Наибольший объем памяти раздела не может быть меньше максимального объема памяти одного задания!");
            return;
        }

        int counter_of_rows = ui->table->rowCount();

        ui->table->insertRow(counter_of_rows);
        ui->table->setItem(counter_of_rows, 0, new QTableWidgetItem(ui->kolichestvo_ustroistv_rdpr_line_edit->text()));
        ui->table->setItem(counter_of_rows, 1, new QTableWidgetItem(ui->V_pamyati_line_edit_rdpr->text()));
        ui->table->setItem(counter_of_rows, 2, new QTableWidgetItem(ui->zatrati_CP_rdpr_line_edit->text()));
        ui->table->setItem(counter_of_rows, 3, new QTableWidgetItem(ui->kolichestvo_zadaniy_line_edit->text()));
        ui->table->setItem(counter_of_rows, 4, new QTableWidgetItem(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text()));
        ui->table->setItem(counter_of_rows, 5, new QTableWidgetItem(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text()));
        ui->table->setItem(counter_of_rows, 6, new QTableWidgetItem(ui->maksimalniy_razmer_pamyati_processa_line_edit->text()));

        main_class_for_rdpr_type_memory* _main_class_for_all_types_memory_for_push = new main_class_for_rdpr_type_memory();
        _main_class_for_all_types_memory_for_push->set_type_of_raspred(rdpr_);
        _main_class_for_all_types_memory_for_push->set_V(ui->V_pamyati_line_edit_rdpr->text().toInt());
        _main_class_for_all_types_memory_for_push->set_zatCP(ui->zatrati_CP_rdpr_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_KY(ui->kolichestvo_ustroistv_rdpr_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_KZ(ui->kolichestvo_zadaniy_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxPP(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxVP(ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxKPZ(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt());

        _main_class_for_all_types_memory_for_push->create_ustr();
        _main_class_for_all_types_memory_for_push->create_all_zad_and_process();
        this->push_main_class(_main_class_for_all_types_memory_for_push);
        ui->table->setItem(counter_of_rows, 7, new QTableWidgetItem(QString::number(_main_class_for_all_types_memory_for_push->run())));
        ++counter_of_rows;
    }

    if(ui->toolBox->currentIndex() == 4){

        this->check_for_rdnp();

        if(this->check_V_and_V_process()){
            QMessageBox::warning(this, "Ошибка!", "Наибольший объем памяти раздела не может быть меньше максимального объема памяти одного задания!");
            return;
        }

        int counter_of_rows = ui->table->rowCount();

        ui->table->insertRow(counter_of_rows);
        ui->table->setItem(counter_of_rows, 0, new QTableWidgetItem(ui->kolichestvo_ustroistv_rdnp_line_edit->text()));
        ui->table->setItem(counter_of_rows, 1, new QTableWidgetItem(ui->V_pamyati_line_edit_rdnp->text()));
        ui->table->setItem(counter_of_rows, 2, new QTableWidgetItem(ui->kolichestvo_zadaniy_line_edit->text()));
        ui->table->setItem(counter_of_rows, 3, new QTableWidgetItem(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text()));
        ui->table->setItem(counter_of_rows, 4, new QTableWidgetItem(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text()));
        ui->table->setItem(counter_of_rows, 5, new QTableWidgetItem(ui->maksimalniy_razmer_pamyati_processa_line_edit->text()));

        main_class_for_rdnp_type_memory* _main_class_for_all_types_memory_for_push = new main_class_for_rdnp_type_memory();
        _main_class_for_all_types_memory_for_push->set_type_of_raspred(rdnp_);
        _main_class_for_all_types_memory_for_push->set_KY(ui->kolichestvo_ustroistv_rdnp_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_V(ui->V_pamyati_line_edit_rdnp->text().toInt());
        _main_class_for_all_types_memory_for_push->set_KZ(ui->kolichestvo_zadaniy_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxPP(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxVP(ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt());
        _main_class_for_all_types_memory_for_push->set_maxKPZ(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt());

        _main_class_for_all_types_memory_for_push->create_ustr();
        _main_class_for_all_types_memory_for_push->create_all_zad_and_process();
        this->push_main_class(_main_class_for_all_types_memory_for_push);
        ui->table->setItem(counter_of_rows, 6, new QTableWidgetItem(QString::number(_main_class_for_all_types_memory_for_push->run())));
        ++counter_of_rows;
    }
}

void MainWindow::on_remove_row_clicked()
{
    auto container_for_delete = ui->table->selectedItems();
    for(auto obj : container_for_delete){
        this->remove_main_class(obj->row());
        ui->table->removeRow(obj->row());
        break;
    }
}

int MainWindow::generate_random_int_number(int min, int max) const
{
    std::mt19937 gen(time(NULL));
    std::uniform_int_distribution<> uid(min, max);
    if(min == max)
        return min;
    return uid(gen);
}

void MainWindow::push_main_class(main_class_for_all_types_memory *_class_for_push)
{
    this->list_of_main_class.push_back(_class_for_push);
}

void MainWindow::remove_main_class(int number)
{
    this->list_of_main_class.erase(this->list_of_main_class.begin() + number);
}

void MainWindow::check_for_all_types()
{
    if(ui->kolichestvo_zadaniy_line_edit->text().toInt() > 30 || ui->kolichestvo_zadaniy_line_edit->text().toInt() < 1)
        ui->kolichestvo_zadaniy_line_edit->setText(QString::number(1));
    if(ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt() > 8 || ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt() < 1)
        ui->maksimalnoe_kol_processov_v_zadanii_line_edit->setText(QString::number(1));
    if(ui->maksimalnaya_prodolzitelnost_processa_line_edit->text().toInt() > 1000 || ui->maksimalnaya_prodolzitelnost_processa_line_edit->text().toInt() < 10)
        ui->maksimalnaya_prodolzitelnost_processa_line_edit->setText(QString::number(10));
    if(ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt() > 500 || ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt() < 10)
        ui->maksimalniy_razmer_pamyati_processa_line_edit->setText(QString::number(10));
}

void MainWindow::check_for_seg()
{
    if(ui->kolichestvo_ustroistv_seg_line_edit->text().toInt() > 9 || ui->kolichestvo_ustroistv_seg_line_edit->text().toInt() <= 1)
        ui->kolichestvo_ustroistv_seg_line_edit->setText(QString::number(2));
    if(ui->V_pamyati_line_edit_seg->text().toInt() > 2000 || ui->V_pamyati_line_edit_seg->text().toInt() < 100)
        ui->V_pamyati_line_edit_seg->setText(QString::number(100));
    if(ui->zatrati_CP_seg_line_edit->text().toInt() > 10 || ui->zatrati_CP_seg_line_edit->text().toInt() < 0)
        ui->zatrati_CP_seg_line_edit->setText(QString::number(0));
    if(ui->zatrati_MD_line_edit->text().toInt() > 10 || ui->zatrati_MD_line_edit->text().toInt() < 0)
        ui->zatrati_MD_line_edit->setText(QString::number(0));
}

void MainWindow::check_for_str()
{
    if(ui->kolichestvo_ustroistv_str_line_edit->text().toInt() > 9 || ui->kolichestvo_ustroistv_str_line_edit->text().toInt() <= 1)
        ui->kolichestvo_ustroistv_str_line_edit->setText(QString::number(2));
    if(ui->V_pamyati_line_edit_str->text().toInt() > 2000 || ui->V_pamyati_line_edit_str->text().toInt() < 100)
        ui->V_pamyati_line_edit_str->setText(QString::number(100));
    if(ui->zatrati_CP_str_line_edit->text().toInt() > 10 || ui->zatrati_CP_str_line_edit->text().toInt() < 0)
        ui->zatrati_CP_str_line_edit->setText(QString::number(0));
    if(ui->zatrati_MD_line_edit_str->text().toInt() > 10 || ui->zatrati_MD_line_edit_str->text().toInt() < 0)
        ui->zatrati_MD_line_edit_str->setText(QString::number(0));
}

void MainWindow::check_for_rstat()
{
    if(ui->kol_razd_line_edit->text().toInt() > 8 || ui->kol_razd_line_edit->text().toInt() < 2)
        ui->kol_razd_line_edit->setText(QString::number(0));
    if(ui->kolichestvo_ustroistv_rstat_line_edit->text().toInt() > 9 || ui->kolichestvo_ustroistv_rstat_line_edit->text().toInt() <= 1)
        ui->kolichestvo_ustroistv_rstat_line_edit->setText(QString::number(2));
    if(ui->lineEdit_V1->text().toInt() > 200 || ui->lineEdit_V1->text().toInt() < 20)
        ui->lineEdit_V1->setText(QString::number(20));
    if(ui->lineEdit_V2->text().toInt() > 200 || ui->lineEdit_V2->text().toInt() < 20)
        ui->lineEdit_V2->setText(QString::number(20));
    if(ui->lineEdit_V3->text().toInt() > 200 || ui->lineEdit_V3->text().toInt() < 20)
        ui->lineEdit_V3->setText(QString::number(20));
    if(ui->lineEdit_V4->text().toInt() > 200 || ui->lineEdit_V4->text().toInt() < 20)
        ui->lineEdit_V4->setText(QString::number(20));
    if(ui->lineEdit_V5->text().toInt() > 200 || ui->lineEdit_V5->text().toInt() < 20)
        ui->lineEdit_V5->setText(QString::number(20));
    if(ui->lineEdit_V6->text().toInt() > 200 || ui->lineEdit_V6->text().toInt() < 20)
        ui->lineEdit_V6->setText(QString::number(20));
    if(ui->lineEdit_V7->text().toInt() > 200 || ui->lineEdit_V7->text().toInt() < 20)
        ui->lineEdit_V7->setText(QString::number(20));
    if(ui->lineEdit_V8->text().toInt() > 200 || ui->lineEdit_V8->text().toInt() < 20)
        ui->lineEdit_V8->setText(QString::number(20));
}

void MainWindow::check_for_rdpr()
{
    if(ui->kolichestvo_ustroistv_rdpr_line_edit->text().toInt() > 9 || ui->kolichestvo_ustroistv_rdpr_line_edit->text().toInt() <= 1)
        ui->kolichestvo_ustroistv_rdpr_line_edit->setText(QString::number(2));
    if(ui->V_pamyati_line_edit_rdpr->text().toInt() > 2000 || ui->V_pamyati_line_edit_rdpr->text().toInt() < 100)
        ui->V_pamyati_line_edit_rdpr->setText(QString::number(100));
    if(ui->zatrati_CP_rdpr_line_edit->text().toInt() > 10 || ui->zatrati_CP_rdpr_line_edit->text().toInt() < 0)
        ui->zatrati_CP_rdpr_line_edit->setText(QString::number(0));
}

void MainWindow::check_for_rdnp()
{
    if(ui->kolichestvo_ustroistv_rdnp_line_edit->text().toInt() > 9 || ui->kolichestvo_ustroistv_rdnp_line_edit->text().toInt() <= 1)
        ui->kolichestvo_ustroistv_rdnp_line_edit->setText(QString::number(2));
    if(ui->V_pamyati_line_edit_rdnp->text().toInt() > 2000 || ui->V_pamyati_line_edit_rdnp->text().toInt() < 100)
        ui->V_pamyati_line_edit_rdnp->setText(QString::number(100));
}

void MainWindow::hide_rstat_razmer_razd()
{
    ui->label_V3->hide();
    ui->label_V4->hide();
    ui->label_V5->hide();
    ui->label_V6->hide();
    ui->label_V7->hide();
    ui->label_V8->hide();

    ui->decrementate_V3->hide();
    ui->decrementate_V4->hide();
    ui->decrementate_V5->hide();
    ui->decrementate_V6->hide();
    ui->decrementate_V7->hide();
    ui->decrementate_V8->hide();

    ui->incrementate_V3->hide();
    ui->incrementate_V4->hide();
    ui->incrementate_V5->hide();
    ui->incrementate_V6->hide();
    ui->incrementate_V7->hide();
    ui->incrementate_V8->hide();

    ui->lineEdit_V3->hide();
    ui->lineEdit_V4->hide();
    ui->lineEdit_V5->hide();
    ui->lineEdit_V6->hide();
    ui->lineEdit_V7->hide();
    ui->lineEdit_V8->hide();
}

void MainWindow::on_create_window_graph_clicked()
{
    if(this->list_of_main_class.empty()){
        QMessageBox::warning(this, "Ошибка!", "Вы не добавили на график ни одной точки!");
        return;
    }

    graph2* dialog_for_graph = new graph2(NULL);
    //for(auto obj : this->list_of_main_class)
        //obj->run();
    dialog_for_graph->set_list_of_main_class(this->list_of_main_class);
    dialog_for_graph->change_ui_();
    dialog_for_graph->setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint);
    dialog_for_graph->setWindowTitle("Построение графиков");
    dialog_for_graph->setModal(true);
    dialog_for_graph->exec();
    //ui->table->setRowCount(0);
    //this->list_of_main_class.clear();
}

void MainWindow::on_about_clicked()
{
    auto dialog_for_about = new about_dialog(this);
    dialog_for_about->setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint);
    dialog_for_about->setWindowTitle("О программе");
    dialog_for_about->setModal(true);
    dialog_for_about->exec();
}

void MainWindow::on_clear_all_clicked()
{
    ui->table->setRowCount(0);
    this->list_of_main_class.clear();
}

void MainWindow::on_incrementate_kol_razd_clicked()
{
    if(ui->kol_razd_line_edit->text().toInt() < 8)
        ui->kol_razd_line_edit->setText(QString::number(ui->kol_razd_line_edit->text().toInt() + 1));
    else
        ui->kol_razd_line_edit->setText(QString::number(8));

    this->on_kol_razd_line_edit_editingFinished();
}

void MainWindow::on_decrementate_kol_razd_clicked()
{
    if(ui->kol_razd_line_edit->text().toInt() >= 3)
        ui->kol_razd_line_edit->setText(QString::number(ui->kol_razd_line_edit->text().toInt() - 1));
    else
        ui->kol_razd_line_edit->setText(QString::number(2));

    this->on_kol_razd_line_edit_editingFinished();
}

void MainWindow::on_incrementate_V1_clicked()
{
    if(ui->lineEdit_V1->text().toInt() < 200)
        ui->lineEdit_V1->setText(QString::number(ui->lineEdit_V1->text().toInt() + 10));
    else
        ui->lineEdit_V1->setText(QString::number(200));
}

void MainWindow::on_decrementate_V1_clicked()
{
    if(ui->lineEdit_V1->text().toInt() >= 30)
        ui->lineEdit_V1->setText(QString::number(ui->lineEdit_V1->text().toInt() - 10));
    else
        ui->lineEdit_V1->setText(QString::number(20));
}

void MainWindow::on_incrementate_V2_clicked()
{
    if(ui->lineEdit_V2->text().toInt() < 200)
        ui->lineEdit_V2->setText(QString::number(ui->lineEdit_V2->text().toInt() + 10));
    else
        ui->lineEdit_V2->setText(QString::number(200));
}

void MainWindow::on_decrementate_V2_clicked()
{
    if(ui->lineEdit_V2->text().toInt() >= 30)
        ui->lineEdit_V2->setText(QString::number(ui->lineEdit_V2->text().toInt() - 10));
    else
        ui->lineEdit_V2->setText(QString::number(20));
}

void MainWindow::on_incrementate_V3_clicked()
{
    if(ui->lineEdit_V3->text().toInt() < 200)
        ui->lineEdit_V3->setText(QString::number(ui->lineEdit_V3->text().toInt() + 10));
    else
        ui->lineEdit_V3->setText(QString::number(200));
}

void MainWindow::on_decrementate_V3_clicked()
{
    if(ui->lineEdit_V3->text().toInt() >= 30)
        ui->lineEdit_V3->setText(QString::number(ui->lineEdit_V3->text().toInt() - 10));
    else
        ui->lineEdit_V3->setText(QString::number(20));
}

void MainWindow::on_incrementate_V4_clicked()
{
    if(ui->lineEdit_V4->text().toInt() < 200)
        ui->lineEdit_V4->setText(QString::number(ui->lineEdit_V4->text().toInt() + 10));
    else
        ui->lineEdit_V4->setText(QString::number(200));
}

void MainWindow::on_decrementate_V4_clicked()
{
    if(ui->lineEdit_V4->text().toInt() >= 30)
        ui->lineEdit_V4->setText(QString::number(ui->lineEdit_V4->text().toInt() - 10));
    else
        ui->lineEdit_V4->setText(QString::number(20));
}

void MainWindow::on_incrementate_V5_clicked()
{
    if(ui->lineEdit_V5->text().toInt() < 200)
        ui->lineEdit_V5->setText(QString::number(ui->lineEdit_V5->text().toInt() + 10));
    else
        ui->lineEdit_V5->setText(QString::number(200));
}

void MainWindow::on_decrementate_V5_clicked()
{
    if(ui->lineEdit_V5->text().toInt() >= 30)
        ui->lineEdit_V5->setText(QString::number(ui->lineEdit_V5->text().toInt() - 10));
    else
        ui->lineEdit_V5->setText(QString::number(20));
}

void MainWindow::on_incrementate_V6_clicked()
{
    if(ui->lineEdit_V6->text().toInt() < 200)
        ui->lineEdit_V6->setText(QString::number(ui->lineEdit_V6->text().toInt() + 10));
    else
        ui->lineEdit_V6->setText(QString::number(200));
}

void MainWindow::on_decrementate_V6_clicked()
{
    if(ui->lineEdit_V6->text().toInt() >= 30)
        ui->lineEdit_V6->setText(QString::number(ui->lineEdit_V6->text().toInt() - 10));
    else
        ui->lineEdit_V6->setText(QString::number(20));
}

void MainWindow::on_incrementate_V7_clicked()
{
    if(ui->lineEdit_V7->text().toInt() < 200)
        ui->lineEdit_V7->setText(QString::number(ui->lineEdit_V7->text().toInt() + 10));
    else
        ui->lineEdit_V7->setText(QString::number(200));
}

void MainWindow::on_decrementate_V7_clicked()
{
    if(ui->lineEdit_V7->text().toInt() >= 30)
        ui->lineEdit_V7->setText(QString::number(ui->lineEdit_V7->text().toInt() - 10));
    else
        ui->lineEdit_V7->setText(QString::number(20));
}

void MainWindow::on_incrementate_V8_clicked()
{
    if(ui->lineEdit_V8->text().toInt() < 200)
        ui->lineEdit_V8->setText(QString::number(ui->lineEdit_V8->text().toInt() + 10));
    else
        ui->lineEdit_V8->setText(QString::number(200));
}

void MainWindow::on_decrementate_V8_clicked()
{
    if(ui->lineEdit_V8->text().toInt() >= 30)
        ui->lineEdit_V8->setText(QString::number(ui->lineEdit_V8->text().toInt() - 10));
    else
        ui->lineEdit_V8->setText(QString::number(20));
}

void MainWindow::on_kol_razd_line_edit_editingFinished()
{
    switch (ui->kol_razd_line_edit->text().toInt()) {

    case 2:
        this->hide_rstat_razmer_razd();
        ui->label_V1->show();
        ui->label_V2->show();
        ui->decrementate_V1->show();
        ui->decrementate_V2->show();
        ui->incrementate_V1->show();
        ui->incrementate_V2->show();
        ui->lineEdit_V1->show();
        ui->lineEdit_V2->show();
        break;
    case 3:
        this->hide_rstat_razmer_razd();
        ui->label_V1->show();
        ui->label_V2->show();
        ui->label_V3->show();
        ui->decrementate_V1->show();
        ui->decrementate_V2->show();
        ui->decrementate_V3->show();
        ui->incrementate_V1->show();
        ui->incrementate_V2->show();
        ui->incrementate_V3->show();
        ui->lineEdit_V1->show();
        ui->lineEdit_V2->show();
        ui->lineEdit_V3->show();
        break;
    case 4:
        this->hide_rstat_razmer_razd();
        ui->label_V1->show();
        ui->label_V2->show();
        ui->label_V3->show();
        ui->label_V4->show();
        ui->decrementate_V1->show();
        ui->decrementate_V2->show();
        ui->decrementate_V3->show();
        ui->decrementate_V4->show();
        ui->incrementate_V1->show();
        ui->incrementate_V2->show();
        ui->incrementate_V3->show();
        ui->incrementate_V4->show();
        ui->lineEdit_V1->show();
        ui->lineEdit_V2->show();
        ui->lineEdit_V3->show();
        ui->lineEdit_V4->show();
        break;
    case 5:
        this->hide_rstat_razmer_razd();
        ui->label_V1->show();
        ui->label_V2->show();
        ui->label_V3->show();
        ui->label_V4->show();
        ui->label_V5->show();
        ui->decrementate_V1->show();
        ui->decrementate_V2->show();
        ui->decrementate_V3->show();
        ui->decrementate_V4->show();
        ui->decrementate_V5->show();
        ui->incrementate_V1->show();
        ui->incrementate_V2->show();
        ui->incrementate_V3->show();
        ui->incrementate_V4->show();
        ui->incrementate_V5->show();
        ui->lineEdit_V1->show();
        ui->lineEdit_V2->show();
        ui->lineEdit_V3->show();
        ui->lineEdit_V4->show();
        ui->lineEdit_V5->show();
        break;
    case 6:
        this->hide_rstat_razmer_razd();
        ui->label_V1->show();
        ui->label_V2->show();
        ui->label_V3->show();
        ui->label_V4->show();
        ui->label_V5->show();
        ui->label_V6->show();
        ui->decrementate_V1->show();
        ui->decrementate_V2->show();
        ui->decrementate_V3->show();
        ui->decrementate_V4->show();
        ui->decrementate_V5->show();
        ui->decrementate_V6->show();
        ui->incrementate_V1->show();
        ui->incrementate_V2->show();
        ui->incrementate_V3->show();
        ui->incrementate_V4->show();
        ui->incrementate_V5->show();
        ui->incrementate_V6->show();
        ui->lineEdit_V1->show();
        ui->lineEdit_V2->show();
        ui->lineEdit_V3->show();
        ui->lineEdit_V4->show();
        ui->lineEdit_V5->show();
        ui->lineEdit_V6->show();
        break;
    case 7:
        this->hide_rstat_razmer_razd();
        ui->label_V1->show();
        ui->label_V2->show();
        ui->label_V3->show();
        ui->label_V4->show();
        ui->label_V5->show();
        ui->label_V6->show();
        ui->label_V7->show();
        ui->decrementate_V1->show();
        ui->decrementate_V2->show();
        ui->decrementate_V3->show();
        ui->decrementate_V4->show();
        ui->decrementate_V5->show();
        ui->decrementate_V6->show();
        ui->decrementate_V7->show();
        ui->incrementate_V1->show();
        ui->incrementate_V2->show();
        ui->incrementate_V3->show();
        ui->incrementate_V4->show();
        ui->incrementate_V5->show();
        ui->incrementate_V6->show();
        ui->incrementate_V7->show();
        ui->lineEdit_V1->show();
        ui->lineEdit_V2->show();
        ui->lineEdit_V3->show();
        ui->lineEdit_V4->show();
        ui->lineEdit_V5->show();
        ui->lineEdit_V6->show();
        ui->lineEdit_V7->show();
        break;
    case 8:
        this->hide_rstat_razmer_razd();
        ui->label_V1->show();
        ui->label_V2->show();
        ui->label_V3->show();
        ui->label_V4->show();
        ui->label_V5->show();
        ui->label_V6->show();
        ui->label_V7->show();
        ui->label_V8->show();
        ui->decrementate_V1->show();
        ui->decrementate_V2->show();
        ui->decrementate_V3->show();
        ui->decrementate_V4->show();
        ui->decrementate_V5->show();
        ui->decrementate_V6->show();
        ui->decrementate_V7->show();
        ui->decrementate_V8->show();
        ui->incrementate_V1->show();
        ui->incrementate_V2->show();
        ui->incrementate_V3->show();
        ui->incrementate_V4->show();
        ui->incrementate_V5->show();
        ui->incrementate_V6->show();
        ui->incrementate_V7->show();
        ui->incrementate_V8->show();
        ui->lineEdit_V1->show();
        ui->lineEdit_V2->show();
        ui->lineEdit_V3->show();
        ui->lineEdit_V4->show();
        ui->lineEdit_V5->show();
        ui->lineEdit_V6->show();
        ui->lineEdit_V7->show();
        ui->lineEdit_V8->show();
        break;
    default:
        QMessageBox::warning(this, "Ошибка!", "Вы ввели неверное число разделов, используйте числа от 2 до 8!");
        break;
    }
}

void MainWindow::create_all_razd(std::vector<QLineEdit *> _vec, main_class_for_rstat_type_memory *_main_class_for_all_types_memory_for_push)
{
    int counter_of_razd = 0;

    for(auto obj : _vec){

        if(ui->kol_razd_line_edit->text().toInt() == counter_of_razd)
            break;

        auto* _p = new razdel();
        _p->set_V_razdela(obj->text().toInt());
        _main_class_for_all_types_memory_for_push->push_razd(_p);
        ++counter_of_razd;
    }
}

bool MainWindow::check_V_and_V_process_for_rstat(std::vector<QLineEdit*> _vec) const
{
    int max_razd = 0;

    int counter_of_razd = 0;

    for(auto obj : _vec){

        if(ui->kol_razd_line_edit->text().toInt() == counter_of_razd)
            break;

        if(max_razd < obj->text().toInt())
            max_razd = obj->text().toInt();
    }

    if(max_razd < ui->maksimalniy_razmer_pamyati_processa_line_edit->text().toInt() * ui->maksimalnoe_kol_processov_v_zadanii_line_edit->text().toInt())
        return true;
    return false;
}

void MainWindow::on_incrementate_kol_ustr_str_clicked()
{
    if(ui->kolichestvo_ustroistv_str_line_edit->text().toInt() < 9)
        ui->kolichestvo_ustroistv_str_line_edit->setText(QString::number(ui->kolichestvo_ustroistv_str_line_edit->text().toInt() + 1));
    else
        ui->kolichestvo_ustroistv_str_line_edit->setText(QString::number(9));
}

void MainWindow::on_decrementate_kol_ustr_str_clicked()
{
    if(ui->kolichestvo_ustroistv_str_line_edit->text().toInt() > 2)
        ui->kolichestvo_ustroistv_str_line_edit->setText(QString::number(ui->kolichestvo_ustroistv_str_line_edit->text().toInt() - 1));
    else
        ui->kolichestvo_ustroistv_str_line_edit->setText(QString::number(2));
}

void MainWindow::on_incrementate_V_pamyati_str_clicked()
{
    if(ui->V_pamyati_line_edit_str->text().toInt() <= 1900)
        ui->V_pamyati_line_edit_str->setText(QString::number(ui->V_pamyati_line_edit_str->text().toInt() + 100));
    else
        ui->V_pamyati_line_edit_str->setText(QString::number(2000));
}

void MainWindow::on_decrementate_V_pamyati_str_clicked()
{
    if(ui->V_pamyati_line_edit_str->text().toInt() > 100)
        ui->V_pamyati_line_edit_str->setText(QString::number(ui->V_pamyati_line_edit_str->text().toInt() - 100));
    else
        ui->V_pamyati_line_edit_str->setText(QString::number(100));
}

void MainWindow::on_incrementate_zatrati_CP_na_peremes_str_clicked()
{
    if(ui->zatrati_CP_str_line_edit->text().toInt() <= 9)
        ui->zatrati_CP_str_line_edit->setText(QString::number(ui->zatrati_CP_str_line_edit->text().toInt() + 1));
    else
        ui->zatrati_CP_str_line_edit->setText(QString::number(10));
}

void MainWindow::on_decrementate_zatrati_CP_na_peremes_str_clicked()
{
    if(ui->zatrati_CP_str_line_edit->text().toInt() >= 1)
        ui->zatrati_CP_str_line_edit->setText(QString::number(ui->zatrati_CP_str_line_edit->text().toInt() - 1));
    else
        ui->zatrati_CP_str_line_edit->setText(QString::number(0));
}

void MainWindow::on_incrementate_zatrati_MD_na_peremes_str_clicked()
{
    if(ui->zatrati_MD_line_edit_str->text().toInt() <= 9)
        ui->zatrati_MD_line_edit_str->setText(QString::number(ui->zatrati_MD_line_edit_str->text().toInt() + 1));
    else
        ui->zatrati_MD_line_edit_str->setText(QString::number(10));
}

void MainWindow::on_decrementate_zatrati_MD_na_peremes_str_clicked()
{
    if(ui->zatrati_MD_line_edit_str->text().toInt() >= 1)
        ui->zatrati_MD_line_edit_str->setText(QString::number(ui->zatrati_MD_line_edit_str->text().toInt() - 1));
    else
        ui->zatrati_MD_line_edit_str->setText(QString::number(0));
}

void MainWindow::on_toolBox_currentChanged(int index)
{
    this->list_of_main_class.clear();
    ui->table->setRowCount(0);
    ui->table->clear();

    if(index == 0)
        this->create_table_UI(QStringList()  << "KY"
                                             << "V"
                                             << "zatCP"
                                             << "zatMD"
                                             << "KZ"
                                             << "maxKPZ"
                                             << "maxPP"
                                             << "maxVP"
                                             << "srT"
                              );

    if(index == 1)
        this->create_table_UI(QStringList()  << "KY"
                                             << "V"
                                             << "zatCP"
                                             << "zatMD"
                                             << "KZ"
                                             << "maxKPZ"
                                             << "maxPP"
                                             << "maxVP"
                                             << "srT"
                              );

    if(index == 2)
        this->create_table_UI(QStringList()  << "KY"
                                             << "V"
                                             << "KR"
                                             << "KZ"
                                             << "maxKPZ"
                                             << "maxPP"
                                             << "maxVP"
                                             << "srT"
                              );
    if(index == 3)
        this->create_table_UI(QStringList()  << "KY"
                                             << "V"
                                             << "zatCP"
                                             << "KZ"
                                             << "maxKPZ"
                                             << "maxPP"
                                             << "maxVP"
                                             << "srT"
                              );
    if(index == 4)
        this->create_table_UI(QStringList()  << "KY"
                                             << "V"
                                             << "KZ"
                                             << "maxKPZ"
                                             << "maxPP"
                                             << "maxVP"
                                             << "srT"
                              );
}

void MainWindow::on_incrementate_kol_ustr_rdpr_clicked()
{
    if(ui->kolichestvo_ustroistv_rdpr_line_edit->text().toInt() < 9)
        ui->kolichestvo_ustroistv_rdpr_line_edit->setText(QString::number(ui->kolichestvo_ustroistv_rdpr_line_edit->text().toInt() + 1));
    else
        ui->kolichestvo_ustroistv_rdpr_line_edit->setText(QString::number(9));
}

void MainWindow::on_decrementate_kol_ustr_rdpr_clicked()
{
    if(ui->kolichestvo_ustroistv_rdpr_line_edit->text().toInt() > 2)
        ui->kolichestvo_ustroistv_rdpr_line_edit->setText(QString::number(ui->kolichestvo_ustroistv_rdpr_line_edit->text().toInt() - 1));
    else
        ui->kolichestvo_ustroistv_rdpr_line_edit->setText(QString::number(2));
}

void MainWindow::on_incrementate_V_pamyati_rdpr_clicked()
{
    if(ui->V_pamyati_line_edit_rdpr->text().toInt() <= 1900)
        ui->V_pamyati_line_edit_rdpr->setText(QString::number(ui->V_pamyati_line_edit_rdpr->text().toInt() + 100));
    else
        ui->V_pamyati_line_edit_rdpr->setText(QString::number(2000));
}

void MainWindow::on_decrementate_V_pamyati_rdpr_clicked()
{
    if(ui->V_pamyati_line_edit_rdpr->text().toInt() > 100)
        ui->V_pamyati_line_edit_rdpr->setText(QString::number(ui->V_pamyati_line_edit_rdpr->text().toInt() - 100));
    else
        ui->V_pamyati_line_edit_rdpr->setText(QString::number(100));
}

void MainWindow::on_incrementate_zatrati_CP_na_peremes_rdpr_clicked()
{
    if(ui->zatrati_CP_rdpr_line_edit->text().toInt() <= 9)
        ui->zatrati_CP_rdpr_line_edit->setText(QString::number(ui->zatrati_CP_rdpr_line_edit->text().toInt() + 1));
    else
        ui->zatrati_CP_rdpr_line_edit->setText(QString::number(10));
}

void MainWindow::on_decrementate_zatrati_CP_na_peremes_rdpr_clicked()
{
    if(ui->zatrati_CP_rdpr_line_edit->text().toInt() >= 2)
        ui->zatrati_CP_rdpr_line_edit->setText(QString::number(ui->zatrati_CP_rdpr_line_edit->text().toInt() - 1));
    else
        ui->zatrati_CP_rdpr_line_edit->setText(QString::number(1));
}

void MainWindow::on_incrementate_kol_ustr_rstat_clicked()
{
    if(ui->kolichestvo_ustroistv_rstat_line_edit->text().toInt() < 9)
        ui->kolichestvo_ustroistv_rstat_line_edit->setText(QString::number(ui->kolichestvo_ustroistv_rstat_line_edit->text().toInt() + 1));
    else
        ui->kolichestvo_ustroistv_rstat_line_edit->setText(QString::number(9));
}

void MainWindow::on_decrementate_kol_ustr_rstat_clicked()
{
    if(ui->kolichestvo_ustroistv_rstat_line_edit->text().toInt() > 2)
        ui->kolichestvo_ustroistv_rstat_line_edit->setText(QString::number(ui->kolichestvo_ustroistv_rstat_line_edit->text().toInt() - 1));
    else
        ui->kolichestvo_ustroistv_rstat_line_edit->setText(QString::number(2));
}

void MainWindow::on_incrementate_kol_ustr_rdnp_clicked()
{
    if(ui->kolichestvo_ustroistv_rdnp_line_edit->text().toInt() < 9)
        ui->kolichestvo_ustroistv_rdnp_line_edit->setText(QString::number(ui->kolichestvo_ustroistv_rdnp_line_edit->text().toInt() + 1));
    else
        ui->kolichestvo_ustroistv_rdnp_line_edit->setText(QString::number(9));
}

void MainWindow::on_decrementate_kol_ustr_rdnp_clicked()
{
    if(ui->kolichestvo_ustroistv_rdnp_line_edit->text().toInt() > 2)
        ui->kolichestvo_ustroistv_rdnp_line_edit->setText(QString::number(ui->kolichestvo_ustroistv_rdnp_line_edit->text().toInt() - 1));
    else
        ui->kolichestvo_ustroistv_rdnp_line_edit->setText(QString::number(2));
}

void MainWindow::on_incrementate_V_pamyati_rdnp_clicked()
{
    if(ui->V_pamyati_line_edit_rdnp->text().toInt() <= 1900)
        ui->V_pamyati_line_edit_rdnp->setText(QString::number(ui->V_pamyati_line_edit_rdnp->text().toInt() + 100));
    else
        ui->V_pamyati_line_edit_rdnp->setText(QString::number(2000));
}

void MainWindow::on_decrementate_V_pamyati_rdnp_clicked()
{
    if(ui->V_pamyati_line_edit_rdnp->text().toInt() > 100)
        ui->V_pamyati_line_edit_rdnp->setText(QString::number(ui->V_pamyati_line_edit_rdnp->text().toInt() - 100));
    else
        ui->V_pamyati_line_edit_rdnp->setText(QString::number(100));
}

void MainWindow::on_help_clicked()
{
    help_window* _help_window = new help_window(this);
    _help_window->setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowMinimizeButtonHint);
    _help_window->setWindowTitle("Помощь");
    _help_window->show();
}
