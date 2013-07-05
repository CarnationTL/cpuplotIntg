#-------------------------------------------------
#
# Project created by QtCreator 2013-07-05T10:07:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += qwt
TARGET = cpuPlotIntergretion
TEMPLATE = app


SOURCES += main.cpp\
        maincpuplot.cpp \
    cpuplot/cpupiemarker.cpp \
    cpuplot/cpuplot.cpp \
    cpuplot/cpustat.cpp

HEADERS  += maincpuplot.h \
    cpuplot/cpupiemarker.h \
    cpuplot/cpuplot.h \
    cpuplot/cpustat.h

FORMS    += maincpuplot.ui





unix:!macx: LIBS += -L$$PWD/../../../../usr/local/qwt-6.1.0-rc3/lib/ -lqwt
unix:!macx: INCLUDEPATH += $$PWD/../../../../usr/local/qwt-6.1.0-rc3/include
unix:!macx: DEPENDPATH += $$PWD/../../../../usr/local/qwt-6.1.0-rc3/include
