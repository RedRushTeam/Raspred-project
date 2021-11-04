#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    qputenv("QT_AUTO_SCREEN_SCALE_FACTOR", "1");
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    //QString styleSheet = QString("font-size:%95px;").arg(QApplication::font().pointSize());
    //a.setStyleSheet(styleSheet);
    QMainWindow window;
    //window.setStyleSheet(styleSheet);
    window.setWindowTitle("Моделирование распределения памяти");
    MainWindow *widget = new MainWindow();
    window.setCentralWidget(widget);
    window.resize(1366, 768);
    window.show();

    return a.exec();
}
