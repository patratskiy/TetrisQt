#ifndef PLUGINTERFACE_H
#define PLUGINTERFACE_H


class PlugInterface
{
public:
    PlugInterface()
    {

    }
virtual int   Initialize();
virtual int   Send();
virtual int   Post();
virtual int   Receive();
virtual int   Start();
virtual int   Stop();


};

#endif // PLUGINTERFACE_H
