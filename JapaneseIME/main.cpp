#include <QApplication>
#include <QDeclarativeView>

#include <QAction>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QDeclarativeView view;
    view.setSource(QUrl("main.qml"));
    view.show();

    QAction *exitAct = new QAction("E&xit", &view);
    exitAct->setShortcut(QKeySequence::Quit);

    return app.exec();
}
