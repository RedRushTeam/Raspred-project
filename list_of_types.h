#ifndef LIST_OF_TYPES_H
#define LIST_OF_TYPES_H
#pragma once
//QMessageBox::warning(this, "Внимание",QString::number( counter_of_rows));

// C++ includes
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <random>
#include <ctime>
#include <utility>
#include <set>
#include <memory>

// QT includes
#include <QMainWindow>
#include <QString>
#include <QRegExp>
#include <QRegExpValidator>
#include <QMessageBox>
#include <QLineSeries>
#include <QDialog>
#include <QValueAxis>
#include <QChart>
#include <QChartView>
#include <QLogValueAxis>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>

using namespace QtCharts;

#define KY_ 0                           //Количество устройств
#define V_ 1                            //Макс. Объем памяти
#define zatCP_ 2                        //Затраты ЦП на перемещение сегмента
#define zatMD_ 3                        //Затраты МД на перемещение сегмента
#define KZ_ 4                           //Количество заданий
#define maxKPZ_ 5                       //Максимальное количество процессов в задании
#define maxPP_ 6                        //Максимальная продолжительность процесса
#define maxVP_ 7                        //Максимальный размер памяти процесса
#define srT_ 8                           //реднее время выполнения одного задания

enum type_of_raspred_{seg_, str_, rstat_, rdpr_, rdnp_};
enum sostoyanie_{ne_zagr, zagr, obrab, zaversheno};

#endif // LIST_OF_TYPES_H
