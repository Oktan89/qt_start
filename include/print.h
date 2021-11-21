#ifndef PRINT_H
#define PRINT_H

#include <QObject>

class Print : public QObject
{
    Q_OBJECT
public slots:
    void prints();
};

#endif // PRINT_H