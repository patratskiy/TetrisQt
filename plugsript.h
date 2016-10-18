#ifndef PLUGSRIPT_H
#define PLUGSRIPT_H

#include <QObject>
#include "pluginterface.h"

class PlugSript : QObject , PlugInterface
{
public:
    PlugSript(QObject* parent=0);
};

#endif // PLAGSRIPT_H
