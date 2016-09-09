#include <QtGui/QApplication>
#include <QtDeclarative/QDeclarativeView>
#include "Ruler.h"
#include "nonscalablearea.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QApplication app( argc, argv );

    QDeclarativeView viewer;
    qmlRegisterType<Ruler>("MyLibrary", 1, 0, "Ruler");
    qmlRegisterType<NonScalableArea>("MyLibrary", 1, 0, "NonScalableArea");
    viewer.setSource(QUrl("qml/rulerTest/main.qml"));
    viewer.show();

    QObject::connect(viewer.rootObject()->findChild<QObject*>("verticalRuler"),
                     SIGNAL(sendWheelEvent(int)),
                     viewer.rootObject(),
                     SIGNAL(wheelEvent(int)));

    QObject::connect(viewer.rootObject()->findChild<QObject*>("horizontalRuler"),
                     SIGNAL(sendWheelEvent(int)),
                     viewer.rootObject(),
                     SIGNAL(wheelEvent(int)));

    return app.exec();
}
