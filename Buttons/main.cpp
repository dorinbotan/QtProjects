#include <QApplication>
#include "buttons.h"

int main (int argc, char** argv)
{
    QApplication app(argc, argv);

    QWidget mainWidget;
    new Buttons(&mainWidget);
    mainWidget.show();

    return app.exec();
}
