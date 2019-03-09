#-------------------------------------------------
#
# Project created by QtCreator 2018-12-29T23:06:07
#
#-------------------------------------------------
QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT       += network

TARGET = hisyntax
TEMPLATE = lib
CONFIG += staticlib

DEFINES += LIB_LIBRARY
DEFINES += KF5SyntaxHighlighting_EXPORTS

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    abstracthighlighter.cpp \
    context.cpp \
    contextswitch.cpp \
    definition.cpp \
    definitiondownloader.cpp \
    foldingregion.cpp \
    format.cpp \
    htmlhighlighter.cpp \
    keywordlist.cpp \
    repository.cpp \
    rule.cpp \
    state.cpp \
    syntaxhighlighter.cpp \
    theme.cpp \
    themedata.cpp \
    wildcardmatcher.cpp \
    syntaxhl_logging.cpp \
    synexception.cpp

HEADERS += \
    abstracthighlighter.h \
    abstracthighlighter_p.h \
    context_p.h \
    contextswitch_p.h \
    definition.h \
    definition_p.h \
    definitiondownloader.h \
    definitionref_p.h \
    foldingregion.h \
    format.h \
    format_p.h \
    htmlhighlighter.h \
    keywordlist_p.h \
    matchresult_p.h \
    repository.h \
    repository_p.h \
    rule_p.h \
    state.h \
    state_p.h \
    syntaxhighlighter.h \
    textstyledata_p.h \
    theme.h \
    themedata_p.h \
    wildcardmatcher_p.h \
    xml_p.h \
    syntaxhl_version.h \
    syntaxhl_logging.h \
    synexception.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

