#include <QApplication>
#include <QDeclarativeView>
#include "keymonitor.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    KeyMonitor monitor;
    monitor.show();
//    QDeclarativeView view;
//    view.setSource(QUrl("C:/Users/db/Documents/Qt/KeyPress/main.qml"));
//    view.show();
    return app.exec();
}
