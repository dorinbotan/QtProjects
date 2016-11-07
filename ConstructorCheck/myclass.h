#ifndef MYCLASS_H
#define MYCLASS_H

#include <QDebug>

class MyClass
{
public:
    MyClass() {
        qDebug() << "######";
        tmp = 111111;
    }

    void testFuunction() {
        qDebug() << tmp;
    }

private:
    int tmp;
};

#endif // MYCLASS_H
