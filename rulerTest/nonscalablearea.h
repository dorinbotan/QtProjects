#ifndef NONSCALABLEAREA_H
#define NONSCALABLEAREA_H

#include <QDeclarativeItem>
#include <QGraphicsSceneWheelEvent>

class NonScalableArea : public QDeclarativeItem
{
    Q_OBJECT

    Q_PROPERTY(Qt::CursorShape cursorShape READ cursorShape WRITE setCursorShape NOTIFY cursorShapeChanged)

public:
    explicit NonScalableArea(QDeclarativeItem *parent = 0);

    Qt::CursorShape cursorShape() const;
    Q_INVOKABLE void setCursorShape(Qt::CursorShape cursorShape);

private:
    int m_cursorShape;
    void wheelEvent(QGraphicsSceneWheelEvent *event);

signals:
    void cursorShapeChanged();
};

#endif // NONSCALABLEAREA_H
