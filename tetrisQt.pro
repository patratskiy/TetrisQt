QT += widgets script scripttools

HEADERS       = tetrixboard.h \
                tetrixpiece.h \
                tetrixwindow.h \
    apbus.h \
    pluginterface.h \
    plugproxitetris.h \
    plugscript.h
SOURCES       = main.cpp \
                tetrixboard.cpp \
                tetrixpiece.cpp \
                tetrixwindow.cpp \
                apbus.cpp \
    plugproxitetris.cpp \
    plugscript.cpp

# install
target.path = /home/root/paa
INSTALLS += target

DISTFILES += \
    tetris.js
