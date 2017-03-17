#ifndef MOUSEWINDOW_H
#define MOUSEWINDOW_H

#include <QDeclarativeItem>

class MouseWindow : public QDeclarativeItem
{
    Q_OBJECT
    Q_PROPERTY(int sensitivity READ getSensitivity WRITE setSensitivity)

public:
    MouseWindow(QDeclarativeItem * = 0);
    int getSensitivity() const;
    void setSensitivity(int);

public slots:
    Q_INVOKABLE void movePointer();

protected:
    void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget * = 0);

private:
    int sensitivity;
};

#endif // MOUSEWINDOW_H
