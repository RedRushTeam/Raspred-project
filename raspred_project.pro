QT       += core gui
QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

RC_ICONS = ram.ico

SOURCES += \
    help_window.cpp \
    about_dialog.cpp \
    graph2.cpp \
    main.cpp \
    main_class_for_all_types_memory.cpp \
    main_class_for_rdnp_type_memory.cpp \
    main_class_for_rdpr_type_memory.cpp \
    main_class_for_rstat_type_memory.cpp \
    main_class_for_seg_type_memory.cpp \
    main_class_for_str_type_memory.cpp \
    mainwindow.cpp \
    process.cpp \
    razdel.cpp \
    razdel_fixed_size.cpp \
    ustroistvo.cpp \
    zadanie.cpp \
    zadanie_for_str.cpp

HEADERS += \
    help_window.h \
    about_dialog.h \
    graph2.h \
    list_of_types.h \
    main_class_for_all_types_memory.h \
    main_class_for_rdnp_type_memory.h \
    main_class_for_rdpr_type_memory.h \
    main_class_for_rstat_type_memory.h \
    main_class_for_seg_type_memory.h \
    main_class_for_str_type_memory.h \
    mainwindow.h \
    process.h \
    razdel.h \
    razdel_fixed_size.h \
    ustroistvo.h \
    zadanie.h \
    zadanie_for_str.h

FORMS += \
    help_window.ui \
    about_dialog.ui \
    graph2.ui \
    mainwindow.ui

VERSION = 1.0.0
QMAKE_TARGET_COMPANY = QARASIQ_STUDIOS
QMAKE_TARGET_PRODUCT = RASPRED
QMAKE_TARGET_COPYRIGHT = QARASIQ_STUDIOS


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



RESOURCES += \
    logo1.qrc

DISTFILES += \
    class_diagramm.qmodel
