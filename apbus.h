#ifndef APBUS_H
#define APBUS_H

#include <QObject>
#include "plugsript.h"

// внимательно читаем про QThread  :
//  https://habrahabr.ru/post/202312/
//  http://vasinnet.blogspot.ru/2012/08/recommended-way-to-using-qthread.html
//  https://habrahabr.ru/post/150274/
//  http://wiki.qt.io/Threads_Events_QObjects
//  машина состояний : http://ru.stackoverflow.com/questions/520422/%D0%9F%D0%B0%D1%80%D0%B0%D0%BB%D0%BB%D0%B5%D0%BB%D1%8C%D0%BD%D1%8B%D0%B5-%D1%81%D0%BE%D1%81%D1%82%D0%BE%D1%8F%D0%BD%D0%B8%D1%8F-%D0%B2-qstatemachine


class ApBus : public QObject
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
