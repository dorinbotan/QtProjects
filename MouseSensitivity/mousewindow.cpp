#include "mousewindow.h"

#include <QDebug>
#include <QPainter>

MouseWindow::MouseWindow(QDeclarativeItem *parent) : QDeclarativeItem(parent)
{
    setFlag(QGraphicsItem::ItemHasNoContents, false);
    setCursor(Qt::BlankCursor);

    initMultiplier();
    oldPos = QCursor::pos();
}

void MouseWindow::initMultiplier()
{
    multiplier[1] = 0.0625;
    multiplier[2] = 0.125;
    multiplier[3] = 0.25;
    multiplier[4] = 0.5;
    multiplier[5] = 0.75;
    multiplier[6] = 1;
    multiplier[7] = 1.5;
    multiplier[8] = 2;
    multiplier[9] = 2.5;
    multiplier[10] = 3;
    multiplier[11] = 3.5;
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
    painter->drawPixmap(QCursor::pos(), QPixmap("C:/Users/db/Documents/Qt/MouseSensitivity/cursor-arrow.png"));
}

QPoint MouseWindow::getNewPos(QPoint a, QPoint b, double multiplier)
{
    return QCursor::pos();
}

void MouseWindow::movePointer()
{
    QPoint toUpdate =  oldPos;
    oldPos = getNewPos(oldPos, QCursor::pos(), 1);
    QCursor::setPos(oldPos);

    update(QRect(toUpdate, QSize(25, 25)) | QRect(oldPos, QSize(25, 25)));
}
