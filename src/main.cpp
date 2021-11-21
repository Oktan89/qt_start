#include <QCoreApplication>
#include <iostream>
#include <QTimer>
#include "print.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Print p;
    QTimer t;

    QObject::connect(&t, &QTimer::timeout, &p, &Print::prints);
    t.start(2000);

    return a.exec();
}