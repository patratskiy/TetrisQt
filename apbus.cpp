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
void ApBus::Initialize()
{
    window.show();

    m_ps =new PlugSript();

}






