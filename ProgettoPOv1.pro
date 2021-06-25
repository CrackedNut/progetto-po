QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

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
    confirmdialog.cpp \
    fillerror.cpp \
    genericlistdialog.cpp \
    json_ops.cpp \
    lineinputdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    rivista.cpp \
    rivistadialog.cpp \
    selectordialog.cpp \
    sorting.cpp \
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
    confirmdialog.h \
    fillerror.h \
    genericlistdialog.h \
    json.hpp \
    json_ops.h \
    lineinputdialog.h \
    mainwindow.h \
    rivista.h \
    rivistadialog.h \
    selectordialog.h \
    sorting.h \
    strutturabase.h

FORMS += \
    articolodialog.ui \
    autoredialog.ui \
    conferenzadialog.ui \
    confirmdialog.ui \
    fillerror.ui \
    genericlistdialog.ui \
    lineinputdialog.ui \
    mainwindow.ui \
    rivistadialog.ui \
    selectordialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
