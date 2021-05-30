QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    articolo.cpp \
    articolodialog.cpp \
    autore.cpp \
    autoredialog.cpp \
    conferenza.cpp \
    conferenzadialog.cpp \
    fillerror.cpp \
    lineinputdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    rivista.cpp \
    rivistadialog.cpp \
    strutturabase.cpp

HEADERS += \
    all_data.h \
    articolo.h \
    articolodialog.h \
    autore.h \
    autoredialog.h \
    common.h \
    conferenza.h \
    conferenzadialog.h \
    fillerror.h \
    lineinputdialog.h \
    mainwindow.h \
    rivista.h \
    rivistadialog.h \
    strutturabase.h

FORMS += \
    articolodialog.ui \
    autoredialog.ui \
    conferenzadialog.ui \
    fillerror.ui \
    lineinputdialog.ui \
    mainwindow.ui \
    rivistadialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
