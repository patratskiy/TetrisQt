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

    QScriptEngine scrptEngine;
    QFile         file("d:\\ETK\\Projects\\qt\\tetrisqt\\tetris.js");
    if (!file.open(QFile::ReadOnly)) {
        QMessageBox::critical(0,
                              QString("File open error"),
                               "Can not open the script file:"+file.fileName() ,
                              QMessageBox::Yes
                             );

    }
    QLabel  lb;
    QScriptValue objTetris=scrptEngine.newQObject(&lb);
    scrptEngine.globalObject().setProperty("objTetris", objTetris);

    //objTetris.setProperty("mBoard",tpCur);
    //scrptEngine.globalObject().setProperty("iTetris",interfaceTetris);
    //QScriptValue val=scrptEngine.evaluate("");
    QString str=QLatin1String(file.readAll());



    scrptEngine.globalObject().setProperty("foo", 123);

    QScriptValue result =
        scrptEngine.evaluate(str);


//    Q_ASSERT(result);

    if (result.isError()) {
        QMessageBox::critical(0,
                              "Evaluating error",
                              result.toString(),
                              QMessageBox::Yes
                             );
    }



    iLines++;
    emit sgDbg(result.toInteger());

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
