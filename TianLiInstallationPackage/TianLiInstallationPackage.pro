# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Tools.
# ------------------------------------------------------
QT += core widgets 
TEMPLATE = app
TARGET = TianLi_setup
DESTDIR = ../x64/Release
CONFIG += release
LIBS += -L"." \
    -ldwmapi
DEPENDPATH += .
MOC_DIR += .
OBJECTS_DIR += release
UI_DIR += .
RCC_DIR += .
RC_FILE = TianLiInstallationPackage.rc
HEADERS += ./resource.h \
    ./TianLiInstallationPackage.h \
    ./QtWidgetsMessageBox.h \
    ./QtWidgetsMessageBox2.h
SOURCES += ./QtWidgetsMessageBox.cpp \
    ./QtWidgetsMessageBox2.cpp \
    ./TianLiInstallationPackage.cpp \
    ./main.cpp
FORMS += ./QtWidgetsMessageBox.ui \
    ./QtWidgetsMessageBox2.ui \
    ./TianLiInstallationPackage.ui
RESOURCES += QtWidgetsMessageBox.qrc \
    TianLiInstallationPackage.qrc

