QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

TARGET = WPCManager
VERSION = 1.0.0.1
QMAKE_TARGET_PRODUCT = WPC Manager
QMAKE_TARGET_COMPANY = WPC Manager
QMAKE_TARGET_COPYRIGHT = Copyright 2024 WPC Manager
QMAKE_TARGET_DESCRIPTION = WolfPack Compaign Manager
QMAKE_TARGET_TRADEMARKS = WPC Manager

SOURCES += \
    main.cpp \
    wpcmanager.cpp

HEADERS += \
    wpcmanager.h

FORMS += \
    wpcmanager.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
