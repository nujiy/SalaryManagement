QT += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += ./View/additionaldays.cpp \
    ./View/additionaldays_show.cpp \
    ./View/addpeople.cpp \
    ./Model/databaseserver.cpp \
    ./View/kinds.cpp \
    ./View/loginform.cpp \
    ./Controller/main.cpp \
    ./View/mainwindow.cpp \
    ./Model/model.cpp \
    ./View/modifypeople.cpp \
    ./Model/salarydetail.cpp \
    ./View/salaryofcompany.cpp \
    ./View/salaryofdepartment.cpp \
    ./View/searchpeople.cpp \
    ./View/workdays.cpp \
    ./View/workdays_show.cpp
HEADERS += ./View/additionaldays.h \
    ./View/additionaldays_show.h \
    ./View/addpeople.h \
    ./Model/databaseserver.h \
    ./View/kinds.h \
    ./View/loginform.h \
    ./View/mainwindow.h \
    ./Model/model.h \
    ./View/modifypeople.h \
    ./Model/salarydetail.h \
    ./View/salaryofcompany.h \
    ./View/salaryofdepartment.h \
    ./View/searchpeople.h \
    ./View/workdays.h \
    ./View/workdays_show.h

FORMS += ./View_UI/additionaldays.ui \
    ./View_UI/additionaldays_show.ui \
    ./View_UI/addpeople.ui \
    ./View_UI/kinds.ui \
    ./View_UI/mainwindow.ui \
    ./View_UI/modifypeople.ui \
    ./View_UI/salaryofcompany.ui \
    ./View_UI/salaryofdepartment.ui \
    ./View_UI/searchpeople.ui \
    ./View_UI/workdays.ui \
    ./View_UI/workdays_show.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
