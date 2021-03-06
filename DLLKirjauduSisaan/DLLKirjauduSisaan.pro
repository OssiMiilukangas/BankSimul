#-------------------------------------------------
#
# Project created by QtCreator 2019-04-02T10:33:48
#
#-------------------------------------------------
QT += widgets
QT += serialport
QT += core
QT += sql
QT += gui

TARGET = DLLKirjauduSisaan
TEMPLATE = lib

DEFINES += DLLKIRJAUDUSISAAN_LIBRARY

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
        dllkirjaudusisaan.cpp \
    kirjaudusisaanmoottori.cpp

HEADERS += \
        dllkirjaudusisaan.h \
        dllkirjaudusisaan_global.h \ 
    kirjaudusisaanmoottori.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    kirjaudusisaanmoottori.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-DLLRFLukija-Desktop_Qt_5_11_1_MinGW_32bit-Release/release/ -lDLLRFLukija
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-DLLRFLukija-Desktop_Qt_5_11_1_MinGW_32bit-Release/debug/ -lDLLRFLukija

INCLUDEPATH += $$PWD/../DLLRFLukija
DEPENDPATH += $$PWD/../DLLRFLukija

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-DLLMainMenu-Desktop_Qt_5_11_1_MinGW_32bit-Release/release/ -lDLLMainMenu
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-DLLMainMenu-Desktop_Qt_5_11_1_MinGW_32bit-Release/debug/ -lDLLMainMenu

INCLUDEPATH += $$PWD/../DLLMainMenu
DEPENDPATH += $$PWD/../DLLMainMenu

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-DLLTietokanta-Desktop_Qt_5_11_1_MinGW_32bit-Release/release/ -lDLLTietokanta
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-DLLTietokanta-Desktop_Qt_5_11_1_MinGW_32bit-Release/debug/ -lDLLTietokanta

INCLUDEPATH += $$PWD/../DLLTietokanta
DEPENDPATH += $$PWD/../DLLTietokanta

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-DLLTilitapahtumat-Desktop_Qt_5_11_1_MinGW_32bit-Release/release/ -lDLLTilitapahtumat
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-DLLTilitapahtumat-Desktop_Qt_5_11_1_MinGW_32bit-Release/debug/ -lDLLTilitapahtumat

INCLUDEPATH += $$PWD/../DLLTilitapahtumat
DEPENDPATH += $$PWD/../DLLTilitapahtumat

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-BankSimulEXE-Desktop_Qt_5_11_1_MinGW_32bit-Release/release/ -lDLLLahjoitaRahaa
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-BankSimulEXE-Desktop_Qt_5_11_1_MinGW_32bit-Release/debug/ -lDLLLahjoitaRahaa

INCLUDEPATH += $$PWD/../DLLLahjoitaRahaa
DEPENDPATH += $$PWD/../DLLLahjoitaRahaa

DESTDIR = "C:\Data\build-BankSimulEXE-Desktop_Qt_5_11_1_MinGW_32bit-Release\release"

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-BankSimulEXE-Desktop_Qt_5_11_1_MinGW_32bit-Release/release/ -lDLLNostaRahaa
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-BankSimulEXE-Desktop_Qt_5_11_1_MinGW_32bit-Release/debug/ -lDLLNostaRahaa

INCLUDEPATH += $$PWD/../DLLNostaRahaa/DLLNostaRahaa
DEPENDPATH += $$PWD/../DLLNostaRahaa/DLLNostaRahaa
