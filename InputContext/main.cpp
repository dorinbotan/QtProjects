#include <QApplication>
#include <QDeclarativeView>
#include <QDeclarativeContext>
#include "inputcontext.h"

int main( int argc, char **argv )
{
    QApplication app( argc, argv );

    InputContext *inputContext = new InputContext;
    app.setInputContext( inputContext );

    QDeclarativeView view;
    view.rootContext()->setContextProperty( "inputContext", (InputContext*)inputContext );
    view.setSource( QUrl( "main.qml" ) );
    view.show();

    return app.exec();
}
