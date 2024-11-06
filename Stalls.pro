QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    admin_db.cpp \
    authorization.cpp \
    database.cpp \
    main.cpp \
    shop.cpp

HEADERS += \
    admin.h \
    admin_db.h \
    authorization.h \
    database.h \
    shop.h

FORMS += \
    admin.ui \
    admin_db.ui \
    authorization.ui \
    database.ui \
    shop.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
