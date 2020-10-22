TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    observer.cpp \
    observable.cpp \
    menuitem.cpp \
    modelmenu.cpp \
    consoleview.cpp \
    conioconsolecontroller.cpp \
    consolecontroller.cpp

HEADERS += \
    observer.h \
    observable.h \
    menuitem.h \
    modelmenu.h \
    consoleview.h \
    conioconsolecontroller.h \
    settings.h \
    consolecontroller.h
