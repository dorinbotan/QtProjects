#include <QFile>
#include <QMap>
#include <QDebug>

#include <typeinfo>

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
   out << map;
}

/* QMap<QString, _E> */ void read()
{
    QString filename = "ru.qmap";
    QFile myFile(filename);
    QMap<QString, QString> map;
    QDataStream in(&myFile);

    if (!myFile.open(QIODevice::ReadOnly))
    {
        qDebug() << "Could not read the file:" << filename << "Error string:" << myFile.errorString();
        return;
    }

    in >> map;
    qDebug() << map.size();
    qDebug() << typeid(map).name();
}

int main()
{
    read();
}
