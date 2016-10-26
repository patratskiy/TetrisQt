#ifndef PLUGINTERFACE_H
#define PLUGINTERFACE_H

#include "tetrixpiece.h"
#include <QVector>
#include <QByteArray>
#include <QObject>

class PlugInterface
{
public:
    PlugInterface()
    {

    }
virtual int   Initialize() {return 0;}
virtual int   Send(){return 0;}
virtual int   Post(){return 0;}
virtual int   Receive(){return 0;}
virtual int   Start(){return 0;}
virtual int   Stop(){return 0;}


};

class InterfaceTetris : public QObject
{
    Q_OBJECT

    int Width, Height;

public:
    TetrixPiece  aPiece;
    QByteArray  aBoard;

    InterfaceTetris() //  (QObject* parent=0) : QObject(parent)
    {
        Width=10; Height=22;
        aBoard.resize(Width*Height);
//        aPiece.resize(4);

    }
    InterfaceTetris(const InterfaceTetris &) // explicit  (QObject* parent=0) : QObject(parent)
    {
//        Width=it.Width;
/*
        Width=10; Height=22;
        aBoard.resize(Width*Height);
//        aPiece.resize(4);
*/
    }

    InterfaceTetris(int w,int h)
    {
        Width=w;
        Height=h;
        aBoard.resize(Width*Height);
  //      aPiece.resize(4);
    }

};


#endif // PLUGINTERFACE_H
