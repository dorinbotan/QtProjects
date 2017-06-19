#include <QApplication>
#include <QtDeclarative/QDeclarativeView>
#include <QDeclarativeItem>
#include "listupdater.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    ListUpdater listUpdater;

    qmlRegisterType<ListUpdater>( "MyLibrary", 1, 0, "ListUpdater" );

    QDeclarativeView view;
    view.setSource(QUrl("C:/Users/db/Documents/Qt/Repeater/main.qml"));
    view.show();

    return app.exec();
}
