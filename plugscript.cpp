#include "plugscript.h"

PlugScript::PlugScript(QObject* parent) : QObject(parent)
{
    iLines=0;
}
void PlugScript::slNewPiece(TetrixPiece tpD)
{

    tpCur=tpD;
    iWaiting=0;
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
