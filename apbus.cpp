#include "apbus.h"

ApBus::ApBus()
{
    cCounter=0;
}
void ApBus::run()
{
    while(true){
        cCounter++;
    }

}
void ApBus::init()
{

    m_ps =new PlugSript();
}






