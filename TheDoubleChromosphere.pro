CONFIG += c++17

SOURCES += \
        src\widget.cpp \
        src\main.cpp \
        src\shuffleArray.c

#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

QT  += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

HEADERS += \
    include\widget.h \
    include\shuffleArray.h

INCLUDEPATH += /usr/include

RESOURCES += \
    resources\resources.qrc

