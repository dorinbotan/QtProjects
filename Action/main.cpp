#include <QApplication>
#include <QDeclarativeView>

#include "mainwindow.h"

int main( int argc, char *argv[] )
{
    QApplication app( argc, argv );

    qmlRegisterType<MainWindow>( "MyLib", 1, 0, "MainWindow" );

    MainWindow mainWindow;

    QDeclarativeView view;
    view.setSource( QUrl( "main.qml" ) );
    view.show();

    QAction *actionOpen = new QAction("&Open", &view);
    actionOpen->setShortcut(QKeySequence::Open);
    QObject::connect(actionOpen, SIGNAL(triggered()), &mainWindow, SLOT(open()));

    view.addAction(actionOpen);

    return app.exec();
}
