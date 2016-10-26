#include "apbus.h"

Q_DECLARE_METATYPE(InterfaceTetris)

ApBus::ApBus()
{
    cCounter=0;
    qRegisterMetaType <InterfaceTetris> ("InterfaceTetris");

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
    bool isOK=true;
//    isOK=isOK && connect(&tWindow,SIGNAL(sgNewPiece(InterfaceTetris)),m_ps,SLOT(slNewPiece(InterfaceTetris)) ,Qt::QueuedConnection );
//    isOK=isOK && connect(&tWindow,SIGNAL(sgChangePos(int)),m_ps,SLOT(slChangePos(int)),Qt::QueuedConnection );
    isOK=isOK && connect(m_ps,SIGNAL(sgDbg(int)),&tWindow,SLOT(slDbg(int)),Qt::QueuedConnection );
    isOK=isOK && connect(m_ps,SIGNAL(sgCmd(int)),&tWindow,SLOT(slCmd(int)),Qt::QueuedConnection );

    Q_ASSERT(isOK);


}






