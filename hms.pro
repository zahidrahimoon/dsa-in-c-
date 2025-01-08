QT += core gui widgets sql
INCLUDEPATH += "C:/Program Files/MySQL/MySQL Server 8.0/include"
LIBS += -L"C:/Program Files/MySQL/MySQL Server 8.0/lib" -lmysql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adddoc.cpp \
    addpat.cpp \
    doctor.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    patient.cpp \
    uptdoc.cpp \
    uptpat.cpp \
    viewdoc.cpp \
    viewpat.cpp
    Images.qrc

HEADERS += \
    adddoc.h \
    addpat.h \
    doctor.h \
    login.h \
    mainwindow.h \
    patient.h \
    uptdoc.h \
    uptpat.h \
    viewdoc.h \
    viewpat.h

FORMS += \
    adddoc.ui \
    addpat.ui \
    doctor.ui \
    login.ui \
    mainwindow.ui \
    patient.ui \
    uptdoc.ui \
    uptpat.ui \
    viewdoc.ui \
    viewpat.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=\
    Images.qrc

DISTFILES +=
