#include "mainwindow.h"
#include <QApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cout << "haha" << endl;
    MainWindow w;
    w.show();

    return a.exec();
}
