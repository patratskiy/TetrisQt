#ifndef PLUGINTERFACE_H
#define PLUGINTERFACE_H


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

#endif // PLUGINTERFACE_H
