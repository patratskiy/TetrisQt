QT += widgets script scripttools

HEADERS       = tetrixboard.h \
                tetrixpiece.h \
                tetrixwindow.h \
    plugsript.h \
    apbus.h \
    pluginterface.h
SOURCES       = main.cpp \
                tetrixboard.cpp \
                tetrixpiece.cpp \
                tetrixwindow.cpp \
                plugsript.cpp \
                apbus.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/widgets/tetrix
INSTALLS += target
