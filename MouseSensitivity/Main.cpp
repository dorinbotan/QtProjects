#include <QApplication>
#include <QDeclarativeView>
#include "mousewindow.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    qmlRegisterType<MouseWindow>("MyLib", 1, 0, "MouseWindow");

    QDeclarativeView view;
    view.setSource(QUrl("C:/Users/db/Documents/Qt/MouseSensitivity/main.qml"));
    view.show();

    return app.exec();
}
