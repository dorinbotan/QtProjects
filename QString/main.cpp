#include <QApplication>
#include <QString>
#include <QLabel>
#include <QDebug>
#include <QList>

#include "qstd.h"

using namespace qstd;

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget wgt;

    cout << "test\n";

    qDebug() << "sizeof widget: " << sizeof(wgt)
                << " sizeof qapplication: " << sizeof(app);

    QString msg;
    QTextStream buf(&msg);

    buf << "A QWidget is " << sizeof(wgt)
           << " bytes. \nA QObject is " << sizeof(QObject)
              << " bytes. \nA QApplication is " << sizeof(app)
                 << " bytes.";

    qDebug() << msg;

    QLabel label1(msg);
    label1.show();

    QList<double> list;

    return app.exec();
}
