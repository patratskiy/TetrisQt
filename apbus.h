#ifndef APBUS_H
#define APBUS_H

#include <QThread>
#include "plugsript.h"

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
