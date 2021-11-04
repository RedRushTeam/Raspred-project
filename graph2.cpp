#include "graph2.h"
#include "ui_graph2.h"

graph2::graph2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::graph2)
{
    ui->setupUi(this);

    QChartView *chartView = new QChartView(this);

    chartView->setRenderHint(QPainter::Antialiasing, true);

    ui->Chart_layout->addWidget(chartView);

    this->chartView = chartView;

    ui->pushButton_3->hide();
    ui->pushButton_2->hide();
}

graph2::~graph2()
{
    list_of_series.clear();
    vec_of_main_class.clear();
    delete ui;
}

void graph2::set_list_of_main_class(std::vector<main_class_for_all_types_memory *> list_of_main_class)
{
    this->vec_of_main_class = list_of_main_class;
}

void graph2::change_ui_()
{
    if(!this->vec_of_main_class.empty())
        switch (this->vec_of_main_class[0]->get_type_of_raspred()) {

        case seg_:
            ui->radioButton_KR->hide();
            break;
        case str_:
            ui->radioButton_KR->hide();
            break;
        case rstat_:
            ui->radioButton_zatCP->hide();
            ui->radioButton_zatMD->hide();
            break;
        case rdpr_:
            ui->radioButton_KR->hide();
            ui->radioButton_zatCP->hide();
            break;
        case rdnp_:
            ui->radioButton_KR->hide();
            ui->radioButton_zatCP->hide();
            ui->radioButton_zatMD->hide();
            break;
        default:
            nullptr;
            break;
        }
}

void graph2::on_pushButton_clicked()
{  
    this->list_of_series.clear();

    this->create_series();

    if(this->chartView != nullptr){

        this->chartView->chart()->removeAllSeries();

        auto list_of_axes = this->chartView->chart()->axes();

        for(auto obj : list_of_axes)
            this->chartView->chart()->removeAxis(obj);
    }

    QChart *chart = new QChart();
    bool flag_for_button = false;

    for(auto obj : this->list_of_series){
        chart->addSeries(obj);
        this->create_chart_title(chart);
        flag_for_button = true;
    }

    chartView->setChart(chart);

    chart->createDefaultAxes();

    auto list_of_axes = chart->axes();

    int sheet_couner = 0;

    QFont font("Times new roman", 14, QFont::Bold);

    for(auto obj : list_of_axes){
        if(sheet_couner == 0)
            obj->setTitleText("Количество устройств");
        if(sheet_couner == 1)
            obj->setTitleText("Среднее время выполнения одного задания");
        obj->setTitleFont(font);
        ++sheet_couner;
    }

    chart->setTitleFont(font);

    ui->pushButton_2->show();
    ui->pushButton_3->show();

    //this->chartView = chartView;

    //if(flag_for_button)
        //ui->pushButton->hide();
}

void graph2::create_series()
{
     std::set<int> set_of_individual;

     std::list<std::pair<int, int>> list_for_point_to_sort;

     switch (this->vec_of_main_class[0]->get_type_of_raspred()) {

     case seg_:
         ui->radioButton_KR->hide();
         break;
     case str_:
         ui->radioButton_KR->hide();
         break;
     case rstat_:
         ui->radioButton_zatCP->hide();
         ui->radioButton_zatMD->hide();
         break;
     case rdpr_:
         ui->radioButton_KR->hide();
         ui->radioButton_zatCP->hide();
         break;
     case rdnp_:
         ui->radioButton_KR->hide();
         ui->radioButton_zatCP->hide();
         ui->radioButton_zatMD->hide();
         break;
     default:
         nullptr;
         break;
     }

     QFont font("Times new roman", 12, QFont::Bold);

     if(ui->radioButton_maxPP->isChecked()){

        for(auto obj : this->vec_of_main_class)
            set_of_individual.insert(obj->get_maxPP());

        for(auto obj1 : set_of_individual){

            QLineSeries *series = new QLineSeries();

            series->setPointsVisible(true);
            series->setPointLabelsFont(font);
            series->setPointLabelsVisible(true);

            for(auto obj : this->vec_of_main_class)
                if(obj->get_maxPP() == obj1){
                    series->setName("Максимальная продолжительность процесса " + QString::number(obj->get_maxPP()));
                    list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
            }

            list_for_point_to_sort.sort();

            for(auto obj : list_for_point_to_sort)
                series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

            list_for_point_to_sort.clear();

            this->list_of_series.push_back(series);
        }
     }

     if(ui->radioButton_maxKP->isChecked()){

         for(auto obj : this->vec_of_main_class)
             set_of_individual.insert(obj->get_maxKPZ());

         for(auto obj1 : set_of_individual){

             QLineSeries *series = new QLineSeries();

             series->setPointsVisible(true);
            series->setPointLabelsFont(font);
             series->setPointLabelsVisible(true);

             for(auto obj : this->vec_of_main_class)
                 if(obj->get_maxKPZ() == obj1){
                     series->setName("Максимальное количество процессов в задании " + QString::number(obj->get_maxKPZ()));
                     list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
             }

             list_for_point_to_sort.sort();

             for(auto obj : list_for_point_to_sort)
                 series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

             list_for_point_to_sort.clear();

             this->list_of_series.push_back(series);
         }
     }

     if(ui->radioButton_maxVP->isChecked()){

         for(auto obj : this->vec_of_main_class)
             set_of_individual.insert(obj->get_maxVP());

         for(auto obj1 : set_of_individual){

             QLineSeries *series = new QLineSeries();

             series->setPointsVisible(true);
            series->setPointLabelsFont(font);
             series->setPointLabelsVisible(true);

             for(auto obj : this->vec_of_main_class)
                 if(obj->get_maxVP() == obj1){
                     series->setName("Максимальный объем памяти процесса " + QString::number(obj->get_maxVP()));
                     list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
             }

             list_for_point_to_sort.sort();

             for(auto obj : list_for_point_to_sort)
                 series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

             list_for_point_to_sort.clear();

             this->list_of_series.push_back(series);
         }
     }

     if(ui->radioButton_KY->isChecked()){

         for(auto obj : this->vec_of_main_class)
             set_of_individual.insert(obj->get_KY());

         for(auto obj1 : set_of_individual){

             QLineSeries *series = new QLineSeries();

             series->setPointsVisible(true);

            series->setPointLabelsFont(font);
             series->setPointLabelsVisible(true);

             for(auto obj : this->vec_of_main_class)
                 if(obj->get_KY() == obj1){
                     series->setName("Количество устройств " + QString::number(obj->get_KY()));
                     list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
             }

             list_for_point_to_sort.sort();

             for(auto obj : list_for_point_to_sort)
                 series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

             list_for_point_to_sort.clear();

             this->list_of_series.push_back(series);
         }
     }

     if(ui->radioButton_V->isChecked()){

         switch (this->vec_of_main_class[0]->get_type_of_raspred()) {
         case rstat_:
             for(auto obj : this->vec_of_main_class)
                 set_of_individual.insert(static_cast<main_class_for_rstat_type_memory*>(obj)->get_V());

             for(auto obj1 : set_of_individual){

                 QLineSeries *series = new QLineSeries();

                 series->setPointsVisible(true);
                series->setPointLabelsFont(font);
                 series->setPointLabelsVisible(true);

                 for(auto obj : this->vec_of_main_class)
                     if(static_cast<main_class_for_rstat_type_memory*>(obj)->get_V() == obj1){
                         series->setName("Общий объем памяти " + QString::number(static_cast<main_class_for_rstat_type_memory*>(obj)->get_V()));
                         list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
                 }

                 list_for_point_to_sort.sort();

                 for(auto obj : list_for_point_to_sort)
                     series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

                 list_for_point_to_sort.clear();

                 this->list_of_series.push_back(series);
             }

             break;

         case seg_:
             for(auto obj : this->vec_of_main_class)
                 set_of_individual.insert(static_cast<main_class_for_seg_type_memory*>(obj)->get_V());

             for(auto obj1 : set_of_individual){

                 QLineSeries *series = new QLineSeries();

                 series->setPointsVisible(true);
            series->setPointLabelsFont(font);
                 series->setPointLabelsVisible(true);

                 for(auto obj : this->vec_of_main_class)
                     if(static_cast<main_class_for_rdnp_type_memory*>(obj)->get_V() == obj1){
                         series->setName("Общий объем памяти " + QString::number(static_cast<main_class_for_rdnp_type_memory*>(obj)->get_V()));
                         list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
                 }

                 list_for_point_to_sort.sort();

                 for(auto obj : list_for_point_to_sort)
                     series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

                 list_for_point_to_sort.clear();

                 this->list_of_series.push_back(series);
                 }

             break;

         case str_:
             for(auto obj : this->vec_of_main_class)
                 set_of_individual.insert(static_cast<main_class_for_str_type_memory*>(obj)->get_V());

             for(auto obj1 : set_of_individual){

                 QLineSeries *series = new QLineSeries();

                 series->setPointsVisible(true);
                series->setPointLabelsFont(font);
                 series->setPointLabelsVisible(true);

                 for(auto obj : this->vec_of_main_class)
                     if(static_cast<main_class_for_str_type_memory*>(obj)->get_V() == obj1){
                         series->setName("Общий объем памяти " + QString::number(static_cast<main_class_for_str_type_memory*>(obj)->get_V()));
                         list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
                 }

                 list_for_point_to_sort.sort();

                 for(auto obj : list_for_point_to_sort)
                     series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

                 list_for_point_to_sort.clear();

                 this->list_of_series.push_back(series);
             }

             break;

         case rdpr_:
             for(auto obj : this->vec_of_main_class)
                 set_of_individual.insert(static_cast<main_class_for_rdpr_type_memory*>(obj)->get_V());

             for(auto obj1 : set_of_individual){

                 QLineSeries *series = new QLineSeries();

                 series->setPointsVisible(true);
            series->setPointLabelsFont(font);
                 series->setPointLabelsVisible(true);

                 for(auto obj : this->vec_of_main_class)
                     if(static_cast<main_class_for_rdpr_type_memory*>(obj)->get_V() == obj1){
                         series->setName("Общий объем памяти " + QString::number(static_cast<main_class_for_rdpr_type_memory*>(obj)->get_V()));
                         list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
                 }

                 list_for_point_to_sort.sort();

                 for(auto obj : list_for_point_to_sort)
                     series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

                 list_for_point_to_sort.clear();

                 this->list_of_series.push_back(series);
             }

             break;

         case rdnp_:
             for(auto obj : this->vec_of_main_class)
                 set_of_individual.insert(static_cast<main_class_for_rdnp_type_memory*>(obj)->get_V());

             for(auto obj1 : set_of_individual){

                 QLineSeries *series = new QLineSeries();

                 series->setPointsVisible(true);
            series->setPointLabelsFont(font);
                 series->setPointLabelsVisible(true);

                 for(auto obj : this->vec_of_main_class)
                     if(static_cast<main_class_for_rdnp_type_memory*>(obj)->get_V() == obj1){
                         series->setName("Общий объем памяти " + QString::number(static_cast<main_class_for_rdnp_type_memory*>(obj)->get_V()));
                         list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
                 }

                 list_for_point_to_sort.sort();

                 for(auto obj : list_for_point_to_sort)
                     series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

                 list_for_point_to_sort.clear();

                 this->list_of_series.push_back(series);
             }

             break;
         default:
             nullptr;
             break;
         }
     }

     if(ui->radioButton_zatCP->isChecked()){

         switch (this->vec_of_main_class[0]->get_type_of_raspred()) {

         case seg_:
             for(auto obj : this->vec_of_main_class)
                 set_of_individual.insert(static_cast<main_class_for_seg_type_memory*>(obj)->get_zatCP());

             for(auto obj1 : set_of_individual){

                 QLineSeries *series = new QLineSeries();

                 series->setPointsVisible(true);
            series->setPointLabelsFont(font);
                 series->setPointLabelsVisible(true);

                 for(auto obj : this->vec_of_main_class)
                     if(static_cast<main_class_for_seg_type_memory*>(obj)->get_zatCP() == obj1){
                         series->setName("Затраты ЦП на перемещение " + QString::number(static_cast<main_class_for_seg_type_memory*>(obj)->get_zatCP()));
                         list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
                 }

                 list_for_point_to_sort.sort();

                 for(auto obj : list_for_point_to_sort)
                     series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

                 list_for_point_to_sort.clear();

                 this->list_of_series.push_back(series);
             }

             break;

         case str_:
             for(auto obj : this->vec_of_main_class)
                 set_of_individual.insert(static_cast<main_class_for_str_type_memory*>(obj)->get_zatCP());

             for(auto obj1 : set_of_individual){

                 QLineSeries *series = new QLineSeries();

                 series->setPointsVisible(true);
            series->setPointLabelsFont(font);
                 series->setPointLabelsVisible(true);

                 for(auto obj : this->vec_of_main_class)
                     if(static_cast<main_class_for_str_type_memory*>(obj)->get_zatCP() == obj1){
                         series->setName("Затраты ЦП на перемещение " + QString::number(static_cast<main_class_for_str_type_memory*>(obj)->get_zatCP()));
                         list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
                 }

                 list_for_point_to_sort.sort();

                 for(auto obj : list_for_point_to_sort)
                     series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

                 list_for_point_to_sort.clear();

                 this->list_of_series.push_back(series);
             }

             break;

         case rdpr_:
             for(auto obj : this->vec_of_main_class)
                 set_of_individual.insert(static_cast<main_class_for_rdpr_type_memory*>(obj)->get_zatCP());

             for(auto obj1 : set_of_individual){

                 QLineSeries *series = new QLineSeries();

                 series->setPointsVisible(true);
            series->setPointLabelsFont(font);
                 series->setPointLabelsVisible(true);

                 for(auto obj : this->vec_of_main_class)
                     if(static_cast<main_class_for_rdpr_type_memory*>(obj)->get_zatCP() == obj1){
                         series->setName("Затраты ЦП на перемещение " + QString::number(static_cast<main_class_for_rdpr_type_memory*>(obj)->get_zatCP()));
                         list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
                 }

                 list_for_point_to_sort.sort();

                 for(auto obj : list_for_point_to_sort)
                     series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

                 list_for_point_to_sort.clear();

                 this->list_of_series.push_back(series);
             }

             break;

         default:
             nullptr;
             break;
         }
     }

     if(ui->radioButton_zatMD->isChecked()){

         switch (this->vec_of_main_class[0]->get_type_of_raspred()) {

         case seg_:
             for(auto obj : this->vec_of_main_class)
                 set_of_individual.insert(static_cast<main_class_for_seg_type_memory*>(obj)->get_zatMD());

             for(auto obj1 : set_of_individual){

                 QLineSeries *series = new QLineSeries();

                 series->setPointsVisible(true);
            series->setPointLabelsFont(font);
                 series->setPointLabelsVisible(true);

                 for(auto obj : this->vec_of_main_class)
                     if(static_cast<main_class_for_seg_type_memory*>(obj)->get_zatMD() == obj1){
                         series->setName("Затраты МД на перемещение " + QString::number(static_cast<main_class_for_seg_type_memory*>(obj)->get_zatMD()));
                         list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
                 }

                 list_for_point_to_sort.sort();

                 for(auto obj : list_for_point_to_sort)
                     series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

                 list_for_point_to_sort.clear();

                 this->list_of_series.push_back(series);
             }

             break;

         case str_:
             for(auto obj : this->vec_of_main_class)
                 set_of_individual.insert(static_cast<main_class_for_str_type_memory*>(obj)->get_zatMD());

             for(auto obj1 : set_of_individual){

                 QLineSeries *series = new QLineSeries();

                 series->setPointsVisible(true);
            series->setPointLabelsFont(font);
                 series->setPointLabelsVisible(true);

                 for(auto obj : this->vec_of_main_class)
                     if(static_cast<main_class_for_str_type_memory*>(obj)->get_zatMD() == obj1){
                         series->setName("Затраты МД на перемещение " + QString::number(static_cast<main_class_for_str_type_memory*>(obj)->get_zatMD()));
                         list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
                 }

                 list_for_point_to_sort.sort();

                 for(auto obj : list_for_point_to_sort)
                     series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

                 list_for_point_to_sort.clear();

                 this->list_of_series.push_back(series);
             }

             break;

         default:
             nullptr;
             break;
         }
     }

     if(ui->radioButton_KR->isChecked()){

         for(auto obj : this->vec_of_main_class)
             set_of_individual.insert(static_cast<main_class_for_rstat_type_memory*>(obj)->get_kol_razd());

         for(auto obj1 : set_of_individual){

             QLineSeries *series = new QLineSeries();

             series->setPointsVisible(true);
            series->setPointLabelsFont(font);
             series->setPointLabelsVisible(true);

             for(auto obj : this->vec_of_main_class)
                 if(static_cast<main_class_for_rstat_type_memory*>(obj)->get_kol_razd() == obj1){
                     series->setName("Количество разделов " + QString::number(static_cast<main_class_for_rstat_type_memory*>(obj)->get_kol_razd()));
                     list_for_point_to_sort.push_back(std::make_pair(obj->get_KZ(), obj->get_sred_T()));
             }

             list_for_point_to_sort.sort();

             for(auto obj : list_for_point_to_sort)
                 series->append(static_cast<qreal>(obj.first), static_cast<qreal>(obj.second));

             list_for_point_to_sort.clear();

             this->list_of_series.push_back(series);
         }
     }
}

void graph2::create_chart_title(QChart *chart)
{
    switch (this->vec_of_main_class[0]->get_type_of_raspred()) {

    case seg_:
        chart->setTitle("Сегментный режим");
        break;
    case str_:
        chart->setTitle("Страничный режим");
        break;
    case rstat_:
        chart->setTitle("Режим распределения памяти статичными разделами");
        break;
    case rdpr_:
        chart->setTitle("Режим распределения памяти динамическими перемещаемыми разделами");
        break;
    case rdnp_:
        chart->setTitle("Режим распределения памяти динамическими неперемещаемыми разделами");
        break;
    default:
        nullptr;
        break;
    }
}

void graph2::on_pushButton_2_clicked()
{
    this->chartView->chart()->zoom(0.9);

    this->chartView->chart()->update();
}

void graph2::on_pushButton_3_clicked()
{
    this->chartView->chart()->zoom(1.1);

    this->chartView->chart()->update();
}
