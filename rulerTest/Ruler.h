#ifndef RULER_H
#define RULER_H

#include <QtCore>
#include <QDeclarativeItem>
#include <QColor>
#include <QGraphicsSceneWheelEvent>

class Ruler : public QDeclarativeItem
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QColor color READ color WRITE setColor)
    Q_PROPERTY(bool metricUnits READ metricUnits WRITE setUnitMode)
    Q_PROPERTY(qreal fov_vertical_mm READ fov_vertical_mm WRITE set_fov_vertical_mm)
    Q_PROPERTY(qreal fov_vertical_pix READ fov_vertical_pix WRITE set_fov_vertical_pix)

public:
    Ruler(QDeclarativeItem *parent = 0);
    QString name() const;
    void setName(const QString &name);

    QColor color() const;
    void setColor(const QColor &color);

    bool metricUnits() const;
    void setUnitMode(const bool &metricUnits);


    qreal fov_vertical_mm() const;
    void set_fov_vertical_mm(const qreal &value);

    qreal fov_vertical_pix() const;
    void set_fov_vertical_pix(const qreal &value);

    void drawMetricRuler(QPainter *painter);
    void drawImperialRuler(QPainter *painter);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);

protected:
    void wheelEvent(QGraphicsSceneWheelEvent *event);

signals:
    void sendWheelEvent(int);

private:
    QString getRulerTickLable(int tick, qreal tickscale_txt, qreal tickscale_min);

    QString m_name;
    QColor m_color;
    bool  m_horizontal_ruler;
    qreal m_fov_vertical_mm;
    qreal m_fov_vertical_pix;
    bool  m_metricUnits;
    qreal m_ppu; // pixels pr. mm
    qreal m_ppuImp; // pixels pr. inch

    bool  m_repaint_needed;
};

#endif // RULER_H
