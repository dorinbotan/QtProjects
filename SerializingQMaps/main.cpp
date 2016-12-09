#include <QString>
#include <QFile>
#include <QMap>
#include <QDataStream>
#include <QDebug>

void write()
{
    QString filename = "test.qmap";
    QFile myFile(filename);
    if (!myFile.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not write to file:" << filename << "Error string:" << myFile.errorString();
        return;
    }

    QMap<QString, QString> map;
    map.insert("one", "this is 1");
    map.insert("two", "this is 2");
    map.insert("three", "this is 3");

    QDataStream out(&myFile);
    out.setVersion(QDataStream::Qt_4_8);
    out << map;
}

QMap<QString,QString> read()
{
    QString filename = "/keymaps/dk.qmap";
    QFile myFile(filename);
    QMap<QString, QString> map;
    QDataStream in(&myFile);
    in.setVersion(QDataStream::Qt_5_2);

    if (!myFile.open(QIODevice::ReadOnly))
    {
        qDebug() << "Could not read the file:" << filename << "Error string:" << myFile.errorString();
        return map;
    }

    in >> map;
    return map;
}

int main()
{
    write();
    qDebug() << read();
    return 0;
}
