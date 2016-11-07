#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char ** argv) {
    QCoreApplication app(argc, argv);

    MyClass myClass;
    myClass.testFuunction();

    return app.exec();
}
