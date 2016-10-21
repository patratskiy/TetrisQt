#include "plugscript.h"

PlugScript::PlugScript(QObject* parent) : QObject(parent)
{

}
void PlugScript::slNewPiece(TetrixPiece tpD)
{

    tpCur=tpD;
}

int PlugScript::Initialize()
{

    QScriptValue  value = mScriptEngine.evaluate("2 * 2");
    qDebug() << value.toInt32();

    return  0;
}
