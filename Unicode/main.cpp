#include <QApplication>
#include <QWidget>
#include <QDebug>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QChar c = 'q';

    qDebug() << c.unicode();

    return 0;
}
