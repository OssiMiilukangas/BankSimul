#-------------------------------------------------
#
# Project created by QtCreator 2019-04-15T12:02:39
#
#-------------------------------------------------

TARGET = DLLNostaRahaa
TEMPLATE = lib

DEFINES += DLLNOSTARAHAA_LIBRARY
QT      += widgets
QT      += sql

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        dllnostarahaa.cpp \
    moottorinostarahaa.cpp \
    vahvistus.cpp \
    nappaimisto.cpp

HEADERS += \
        dllnostarahaa.h \
        dllnostarahaa_global.h \  
    moottorinostarahaa.h \
    vahvistus.h \
    nappaimisto.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    moottorinostarahaa.ui \
    vahvistus.ui \
    nappaimisto.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../build-DLLTietokanta-Desktop_Qt_5_11_1_MinGW_32bit-Release/release/ -lDLLTietokanta
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../build-DLLTietokanta-Desktop_Qt_5_11_1_MinGW_32bit-Release/debug/ -lDLLTietokanta

INCLUDEPATH += $$PWD/../../DLLTietokanta
DEPENDPATH += $$PWD/../../DLLTietokanta

DESTDIR = "C:\Data\build-BankSimulEXE-Desktop_Qt_5_11_1_MinGW_32bit-Release\release"
