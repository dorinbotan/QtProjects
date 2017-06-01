#include <QDebug>

int main(int argc, char **argv)
{
    QChar c = '❄';
    qDebug() << c.unicode();

    return 0;
}
