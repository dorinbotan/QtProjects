// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
#include <QApplication>
#include <QtDeclarative/QDeclarativeView>
#include <QInputDialog>
#include <QDebug>
#include <QPushButton>

#include <QWSServer>
#include <QWSKeyboardHandler>
#include <QKbdDriverFactory>

#include "mainwindow.h"

Q_DECL_EXPORT int main( int argc, char *argv[] )
{
    QApplication app( argc, argv );

    QWSServer::setBackground( QBrush( QColor( 0, 0, 0, 0 ) ) );

//    QDeclarativeView view;
//    view.setSource(QUrl("/tmp/qml/main.qml"));
//    view.setStyleSheet( "background-color: rgba(0, 0, 0, 0);" );

    MainWindow mainWindow;
    mainWindow.showFullScreen();

    return app.exec();
}
