#include "syntaxhighlighter.h"
#include <QString>
#include <QObject>
#include <QDebug>

//Q_INVOKABLE QString SyntaxHighlighter::replace(QString format, QString& source, void (*function)(QString &source, int seed, QRegExp regex))
//{
//    QRegExp reg(format);
//    reg.setMinimal(true);
//    int s = -1;
//    while((s = reg.indexIn(source, s+1))>=0){