#ifndef APBUS_H
#define APBUS_H

#include <QThread>
#include "plugsript.h"

// внимательно читаем про QThread  :
//  https://habrahabr.ru/post/202312/
//  http://vasinnet.blogspot.ru/2012/08/recommended-way-to-using-qthread.html
//  https://habrahabr.ru/post/150274/
//  http://wiki.qt.io/Threads_Events_QObjects



class ApBus : public QThread
{
    Q_OBJECT
    int cCounter;
    PlugSript *m_ps;
public:
    explicit ApBus();//{iPP=0;cCounter=0;}

    void run();
    void init();

signals:

public slots:
};

#endif // APBUS_H
