#include "plugscript.h"

Q_DECLARE_METATYPE(InterfaceTetris)

PlugScript::PlugScript(QObject* parent) : QObject(parent)
{
    iLines=0;
}
void PlugScript::slNewPiece(InterfaceTetris tpD)
{


    ifTetris=&tpD;
    tpCur=tpD.Piece;
    iWaiting=0;

    QScriptEngine scrptEngine;
    //QScriptValue interfaceTetris=scrptEngine.newObject(&tpD);
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
