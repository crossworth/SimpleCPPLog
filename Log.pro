TARGET = Log
CONFIG += console
CONFIG -= app_bundle
TEMPLATE = app

QMAKE_CXXFLAGS += -std=gnu++1y

SOURCES += main.cpp \
    Log.cpp

HEADERS += \
    Log.h \
    LogInc.h
