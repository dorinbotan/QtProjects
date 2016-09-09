#include "nonscalablearea.h"

NonScalableArea::NonScalableArea(QDeclarativeItem *parent) :
    QDeclarativeItem(parent),
    m_cursorShape(-1)
{
}

Qt::CursorShape NonScalableArea::cursorShape() const
{
    return cursor().shape();
}

void NonScalableArea::setCursorShape(Qt::CursorShape cursorShape)
{
    if(m_cursorShape == (int)cursorShape)
        return;

    setCursor(cursorShape);
    emit cursorShapeChanged();

    m_cursorShape = cursorShape;
}

void NonScalableArea::wheelEvent(QGraphicsSceneWheelEvent *event)
{
    event->accept();
}
