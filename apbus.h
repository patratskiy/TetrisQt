#ifndef APBUS_H
#define APBUS_H

#include <QObject>
#include "plugscript.h"
#include "tetrixwindow.h"

// внимательно читаем про QThread  :
//  https://habrahabr.ru/post/202312/
//  http://vasinnet.blogspot.ru/2012/08/recommended-way-to-using-qthread.html
//  https://habrahabr.ru/post/150274/
//  http://wiki.qt.io/Threads_Events_QObjects
//  машина состояний : http://ru.stackoverflow.com/questions/520422/%D0%9F%D0%B0%D1%80%D0%B0%D0%BB%D0%BB%D0%B5%D0%BB%D1%8C%D0%BD%D1%8B%D0%B5-%D1%81%D0%BE%D1%81%D1%82%D0%BE%D1%8F%D0%BD%D0%B8%D1%8F-%D0%B2-qstatemachine
// кучи http://wm-help.net/books-online/print-page/59464/59464-11.html
// ЛИНУКС потоки : http://citforum.ru/programming/unix/threads/ http://citforum.ru/programming/unix/threads_2/

class PlugScript;

class ApBus : public QObject
{
    Q_OBJECT
    int cCounter;
    PlugScript *m_ps;

    TetrixWindow tWindow;

public:
    explicit ApBus();//{iPP=0;cCounter=0;}

    void run();
    void Initialize();

signals:

public slots:

};

#endif // APBUS_H
