#include "mousewindow.h"

#include <QDebug>
#include <QPainter>

MouseWindow::MouseWindow(QDeclarativeItem *parent) : QDeclarativeItem(parent)
{
    setFlag(QGraphicsItem::ItemHasNoContents, false);
}

int MouseWindow::getSensitivity() const
{
    return sensitivity;
}

void MouseWindow::setSensitivity(int val)
{
    sensitivity = val;
}

QString pointToString(QPoint point)
{
    return QString::number(QCursor::pos().x()) + "x" + QString::number(QCursor::pos().y());
}

void MouseWindow::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->drawText(QRect(0, 0, 1920, 1080), pointToString(QCursor::pos()));
}

void MouseWindow::movePointer()
{
    update();
}
