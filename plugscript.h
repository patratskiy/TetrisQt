#ifndef PLUGSRIPT_H
#define PLUGSRIPT_H

#include <QObject>
#include <QtScript>

#include "tetrixpiece.h"
#include "pluginterface.h"

class PlugScript : public QObject ,  PlugInterface
{
    Q_OBJECT

    QScriptEngine mScriptEngine;

    TetrixPiece tpCur;
public:
    PlugScript(QObject* parent=0);
    int Initialize();
public slots:
    void slNewPiece(TetrixPiece);


};

#endif // PLAGSRIPT_H
