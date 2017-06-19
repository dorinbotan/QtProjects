#include <QApplication>
#include <QDeclarativeView>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QDeclarativeView view;
    view.setSource(QUrl("C:/Users/db/Documents/Qt/LongText/main.qml"));
    view.show();
    return app.exec();
}
