QT += widgets
QT       += network
requires(qtConfig(listwidget))

HEADERS       = \
    codeeditor.h \
    ../src/abstracthighlighter.h \
    ../src/abstracthighlighter_p.h \
    ../src/context_p.h \
    ../src/contextswitch_p.h \
    ../src/definition.h \
    ../src/definition_p.h \
    ../src/definitiondownloader.h \
    ../src/definitionref_p.h \
    ../src/foldingregion.h \
    ../src/format.h \
    ../src/format_p.h \
    ../src/htmlhighlighter.h \
    ../src/keywordlist_p.h \
    ../src/syntaxhl_export.h \
    ../src/syntaxhl_logging.h \
    ../src/syntaxhl_version.h \
    ../src/matchresult_p.h \
    ../src/repository.h \
    ../src/repository_p.h \
    ../src/rule_p.h \
    ../src/state.h \
    ../src/state_p.h \
    ../src/syntaxhighlighter.h \
    ../src/textstyledata_p.h \
    ../src/theme.h \
    ../src/themedata_p.h \
    ../src/wildcardmatcher_p.h \
    ../src/xml_p.h \
    ../src/exception.h
SOURCES       = main.cpp \
    codeeditor.cpp \
    ../src/abstracthighlighter.cpp \
    ../src/context.cpp \
    ../src/contextswitch.cpp \
    ../src/definition.cpp \
    ../src/definitiondownloader.cpp \
    ../src/foldingregion.cpp \
    ../src/format.cpp \
    ../src/htmlhighlighter.cpp \
    ../src/keywordlist.cpp \
    ../src/syntaxhl_logging.cpp \
    ../src/repository.cpp \
    ../src/rule.cpp \
    ../src/state.cpp \
    ../src/syntaxhighlighter.cpp \
    ../src/theme.cpp \
    ../src/themedata.cpp \
    ../src/wildcardmatcher.cpp \
    ../src/exception.cpp

INCLUDEPATH += $$PWD/../src
