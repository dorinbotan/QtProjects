#ifndef QSTD_H
#define QSTD_H

#include <QTextStream>
#include <QString>
#include <QFile>

namespace qstd {
    extern QTextStream cin;
    extern QTextStream cout;
    extern QTextStream cerr;
    bool yes(QString yesNoQuestion);
    bool mode(QString prompt);
    int promptInt(int base = 10);
    double promptDouble();
    void promptOutputFile(QFile &outfile);
    void promptInputFile(QFile &infile);
}

#endif // QSTD_H
