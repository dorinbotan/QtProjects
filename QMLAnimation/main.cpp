#include <QApplication>
#include <QtDeclarative/QDeclarativeView>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QDeclarativeView view;
    view.setSource(QUrl("/Users/db/Documents/Qt/QMLAnimation/main.qml"));
    view.show();

    return app.exec();
}
