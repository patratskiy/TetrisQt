#ifndef PLUGSRIPT_H
#define PLUGSRIPT_H

#include <QObject>
#include <QtScript>

#include "pluginterface.h"

class PlugSript : QObject ,  PlugInterface
{
    QScriptEngine mScriptEngine;
public:
    PlugSript(QObject* parent=0);
    int Initialize();
};

#endif // PLAGSRIPT_H
