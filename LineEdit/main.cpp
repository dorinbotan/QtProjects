#include <QApplication>
#include <QWidget>

#include <QLineEdit>

int main( int argc, char **argv )
{
    QApplication app( argc, argv );

    QLineEdit lineEdit;
    lineEdit.show();

    return app.exec();
}
