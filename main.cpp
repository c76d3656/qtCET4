#include "mainwindow.h"
#include <QApplication>
#include "front.h"
std::vector<individual> words;
int main(int argc, char *argv[])
{
    FrontDef::formal();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
