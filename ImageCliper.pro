QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle
CONFIG += link_pkgconfig
PKGCONFIG += opencv4
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        imageprocessor.cpp \
        main.cpp
INCLUDEPATH +=  /usr/include/opencv4/opencv2



LIBS += -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs -lopencv_videoio -lopencv_calib3d
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    imageprocessor.h
