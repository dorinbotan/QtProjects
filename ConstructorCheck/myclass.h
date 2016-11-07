#ifndef MYCLASS_H
#define MYCLASS_H

#include <QDebug>

class MyClass
{
public:
    MyClass() {
        qDebug() << "######";
    }

    void testFuunction() {
        qDebug() << "!!!!!!";
    }
};

#endif // MYCLASS_H
