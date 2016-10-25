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
    InterfaceTetris *ifTetris;
    int iLines;
    int iWaiting;
public:
    PlugScript(QObject* parent=0);
    int Initialize();
public slots:
    void slNewPiece(InterfaceTetris);//TetrixPiece
    void slChangePos(int);
signals:
    void sgDbg(int);
    void sgCmd(int);


};

#endif // PLAGSRIPT_H
