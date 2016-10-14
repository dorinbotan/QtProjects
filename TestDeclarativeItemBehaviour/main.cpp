#include <QApplication>
#include <QtGui>
#include <QWSServer>

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QmlApplicationViewer viewer;

    QWidget wgt;
    wgt.show();

    qmlRegisterType

    return app->exec();
}
