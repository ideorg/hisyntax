QT += widgets
requires(qtConfig(listwidget))

HEADERS       = \
    codeeditor.h
SOURCES       = main.cpp \
    codeeditor.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-hisyntax-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/release/ -lhisyntax
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-hisyntax-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/debug/ -lhisyntax
else:unix: LIBS += -L$$PWD/../build-hisyntax-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/ -lhisyntax

INCLUDEPATH += $$PWD/../src
DEPENDPATH += $$PWD/../src

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../build-hisyntax-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/release/libhisyntax.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../build-hisyntax-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/debug/libhisyntax.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../build-hisyntax-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/release/hisyntax.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../build-hisyntax-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/debug/hisyntax.lib
else:unix: PRE_TARGETDEPS += $$PWD/../build-hisyntax-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/libhisyntax.a
