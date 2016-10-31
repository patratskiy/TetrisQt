#include "plugscript.h"
#include <QByteArray>
#include <QtWidgets>

Q_DECLARE_METATYPE(InterfaceTetris)

PlugScript::PlugScript(QObject* parent) : QObject(parent)
{
    iLines=0;
}
void PlugScript::slNewPiece(InterfaceTetris tpD)
{


    ifTetris=&tpD;
//    QByteArray     tpCur( tpD.aBoard);
    iWaiting=0;
    QLabel  lb;

    QScriptEngine scrptEngine;
    QScriptValue objTetris=scrptEngine.newQObject(&lb);
//    objTetris.setProperty("mBoard",tpCur);

    //scrptEngine.globalObject().setProperty("iTetris",interfaceTetris);
    //QScriptValue val=scrptEngine.evaluate("");

    iLines++;

    emit sgDbg(iLines);

}
void PlugScript::slChangePos(int tpD)
{

    iWaiting++;
    //if (iWaiting%10==0)
    if (tpD==0)
        emit sgCmd(Qt::Key_Down);
  //  emit sgDbg(iLines);

}


int PlugScript::Initialize()
{

    QScriptValue  value = mScriptEngine.evaluate("2 * 2");
    qDebug() << value.toInt32();

    return  0;
}
