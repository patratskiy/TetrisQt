#ifndef PLUGINTERFACE_H
#define PLUGINTERFACE_H

#include "tetrixpiece.h"
#include <QVector>

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
    int Width, Height;

public:
    InterfaceTetris()
    {};
    InterfaceTetris(int w,int h)
    {
        Width=w;
        Height=h;
        Board.resize(w*h);
    };

    TetrixPiece Piece;
    QVector<TetrixShape> Board;

};


#endif // PLUGINTERFACE_H
