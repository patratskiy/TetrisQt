#include "plugsript.h"

PlugSript::PlugSript(QObject* parent) : QObject(parent)
{

}

int PlugSript::Initialize()
{

    QScriptValue  value = mScriptEngine.evaluate("2 * 2");
    qDebug() << value.toInt32();

    return  0;
}
