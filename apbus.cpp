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
    tWindow.show();
    m_ps =new PlugScript();
    bool isOK=connect(&tWindow,SIGNAL(sgNewPiece(TetrixPiece)),m_ps,SLOT(slNewPiece(TetrixPiece)));
    Q_ASSERT(isOK);


}






