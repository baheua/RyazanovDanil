#include "mainwindow.h"
#include <QApplication>
//Comment from bash
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
