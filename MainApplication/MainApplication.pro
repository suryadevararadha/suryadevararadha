QT += core gui widgets network

SOURCES += \
    main.cpp



win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../Downloads/Carin/PatientDetails/ -lpatientdetailsplugin
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../Downloads/Carin/PatientDetails/ -lpatientdetailsplugind

INCLUDEPATH += $$PWD/../../../Downloads/Carin/PatientDetails
DEPENDPATH += $$PWD/../../../Downloads/Carin/PatientDetails



win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../Downloads/Carin/Patient/ -lpatientwindowplugin
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../Downloads/Carin/Patient/ -lpatientwindowplugind

INCLUDEPATH += $$PWD/../../../Downloads/Carin/Patient
DEPENDPATH += $$PWD/../../../Downloads/Carin/Patient
