#ifndef SYNTAXHIGHLIGHTER_H
#define SYNTAXHIGHLIGHTER_H
#include <QString>
#include <QObject>

#define REPLACE(format, rep, len)\
    reg=QRegExp(format);\
    s = -1;\
    while((s = reg.indexIn(source, s+1))>=0){\
        source.replace(s, reg.cap(0).length(), rep);\
        s+= len;\
    }\

//    reg.setMinimal(true);\
//    source.replace(reg, rep);

//#define REPLACE(format, rep, len)\
//    reg=Q