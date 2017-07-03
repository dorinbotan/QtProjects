#include <QApplication>
#include <QDeclarativeView>
#include <QWidget>

#include <QTextEdit>

#include "openwnn/wnnEngine/include/openwnnenginejajp.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
//    QDeclarativeView view;
//    view.setSource(QUrl("main.qml"));
//    view.show();

    QWidget wgt;
    QTextEdit textEdit(&wgt);
    textEdit.setText("Hello world!");
    wgt.show();

    OpenWnnEngineJAJP ime;
    ComposingText composingText(&textEdit);
    composingText.moveCursor(ComposingText::LAYER0, 5);

    return app.exec();
}
