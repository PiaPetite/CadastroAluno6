#ifndef SYNTAXHIGHLIGHTER_H
#define SYNTAXHIGHLIGHTER_H
#include <QString>
#include <QObject>

#define REPLACE(format, rep, len)\
    reg=QRegExp(format);\
    s = -1;\
    while((s 