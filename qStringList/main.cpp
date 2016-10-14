#include <QStringList>
#include <QDebug>
#include <cassert>
#include <QLabel>

int main()
{
    QString winter = "December, January, February";
    QString spring = "March, April, May";
    QString summer = "June, July, August";
    QString fall = "September, October, November";

    QStringList list;
    list << winter;
    list += spring;
    list.append(summer);
    list << fall;

    qDebug() << "The Spring months are: " << list[1];

    QString allmonths = list.join(", ");

    qDebug() << allmonths;

    QStringList list2 = allmonths.split(", ");

    assert(list2.size() == 12);

    foreach (QString str, list2)
        qDebug() << QString(" [%1] ").arg(str);

    for (QStringList::iterator it = list.begin(); it != list.end(); ++it)
    {
        QString current = *it;
        qDebug() << "[" << current << "]";
    }

    QListIterator<QString> itr(list2);
    while(itr.hasNext())
    {
        QString current = itr.next();
        qDebug() << "{" << current << "}";
    }

    return 0;
}
