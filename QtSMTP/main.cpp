#include <QApplication>
#include <QDeclarativeView>
#include "mainwindow.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    qmlRegisterType<MainWindow> ("MyLib", 1, 0, "MainWindow");

    QDeclarativeView view;
    view.setSource(QUrl("C:/Users/db/Documents/Qt/QtSMTP/Main.qml"));
    view.show();

    return app.exec();
}
