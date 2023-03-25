QT       += core gui
QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    graph2d.cpp \
    main.cpp \
    mainwindow.cpp \
    src/Expression.cpp \
    src/Constante.cpp \
    src/Addition.cpp \
    src/Division.cpp \
    src/Multiplication.cpp \
    src/Operateur.cpp \
    src/Soustraction.cpp

HEADERS += \
    graph2d.h \
    mainwindow.h \
    include/Expression.h \
    include/Constante.h \
    include/Addition.h \
    include/Division.h \
    include/Multiplication.h \
    include/Operateur.h \
    include/Soustraction.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
