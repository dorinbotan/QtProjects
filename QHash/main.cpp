#include <QApplication>
#include <QHash>
#include <QDebug>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QHash<QString, QString> hash;
    hash.insert("Hello", "world!");

    qDebug() << hash.size();

//    return app.exec();
    return 0;
}
