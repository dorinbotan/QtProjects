#include "Ruler.h"
#include <QPainter>
#include <math.h>
#include "log.h"
#include <ctime>
#include "time.h"
#include <sys/types.h>
#include <QWheelEvent>
#include <QGraphicsWidget>


Ruler::Ruler(QDeclarativeItem *parent)
    : QDeclarativeItem(parent)
{
    // need to disable this flag to draw inside a QDeclarativeItem
    setFlag(QGraphicsItem::ItemHasNoContents, false);
    m_fov_vertical_mm=170;
    m_fov_vertical_pix=1080;
    m_metricUnits = true;
    m_repaint_needed=true;
}


QString Ruler::name() const
{
    return m_name;
}

void Ruler::setName(const QString &name)
{
    m_name = name;
}

QColor Ruler::color() const
{
    return m_color;
}

void Ruler::setColor(const QColor &color)
{
    m_color = color;
    m_repaint_needed=true;
}


bool Ruler::metricUnits() const
{
    return m_metricUnits;
}

void Ruler::setUnitMode(const bool &metricUnits){
    m_metricUnits = metricUnits;
    m_repaint_needed=true;
}


qreal Ruler::fov_vertical_mm() const
{
    return m_fov_vertical_mm;
}

void Ruler::set_fov_vertical_mm(const qreal &value)
{
    m_fov_vertical_mm = value;
    m_ppu= m_fov_vertical_pix/m_fov_vertical_mm;
    m_ppuImp = m_ppu*25.4f;
    m_repaint_needed=true;
    update();
}

qreal Ruler::fov_vertical_pix() const
{
    return m_fov_vertical_pix;
}

void Ruler::set_fov_vertical_pix(const qreal &value)
{
    m_fov_vertical_pix = value;
    m_ppu= m_fov_vertical_pix/m_fov_vertical_mm;
    m_ppuImp = m_ppu*25.4f;
    m_repaint_needed=true;
    update();
}


static const qreal tickscale_array_met[] = { 0.001, 0.005, 0.01, 0.05, 0.10, 0.50, 1.00, 5.00, 10.00, 50.00, 100.00 };
void Ruler::drawMetricRuler( QPainter *painter )
{
    const int precision_array[] =  { 3, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0 };

    qreal tickscale_min;
    qreal tickscale_mid;
    qreal tickscale_max;
    qreal tickscale_txt;
    int tickTextHeight = 10;

    int minor_tick_index = 6;

    /* Decide active ticks and label */
    for( uint32_t i = 2; i < sizeof( tickscale_array_met ) / sizeof( qreal ); i++ )
    {
        if( ( m_fov_vertical_mm / tickscale_array_met[ i ] ) > 6.0 )
        {
            minor_tick_index = i;
        }
    }

    int tick_min_precision = precision_array[ minor_tick_index - 2 ];

    tickscale_min = tickscale_array_met[ minor_tick_index - 2 ];
    tickscale_mid = tickscale_array_met[ minor_tick_index - 1 ];
    tickscale_max = tickscale_array_met[ minor_tick_index ];
    tickscale_txt = tickscale_max;

    QPen pen( m_color, 1 );
    QFont font;
    font.setPixelSize( 12 );
    QFontMetrics fm(font);

    painter->setFont( font );
    painter->setPen( pen );
    painter->setRenderHints( QPainter::HighQualityAntialiasing, true );
    painter->fillRect( boundingRect(), Qt::transparent );

    int center_x = (int) boundingRect().width() / 2;
    int center_y = (int) boundingRect().height() / 2;

    if( boundingRect().height() > boundingRect().width() )
    { // Draw a vertical ruler
        QString divisionText = QString::number( tickscale_min, 'f', tick_min_precision ) + "mm divisions";
        int divisionTextWidth = fm.width(divisionText);

        painter->drawLine( QPointF( center_x, 0 ), QPointF( center_x, boundingRect().height() ) );
        painter->drawLine( QPointF( center_x - 40, center_y ), QPointF( center_x + 40, center_y ) );
        painter->drawText( center_x - divisionTextWidth - 40, 20,  divisionText );
        for( int ticks = 0; ticks < ( boundingRect().height() ) / ( m_ppu * tickscale_min * 2 ); ticks++ )
        {
            qreal y = m_ppu * tickscale_min * ticks;
            painter->drawLine( QPointF( center_x - 5, center_y + y ), QPointF( center_x + 5, center_y + y ) );
            painter->drawLine( QPointF( center_x - 5, center_y - y ), QPointF( center_x + 5, center_y - y ) );
        }

        for( int ticks = 0; ticks < ( boundingRect().height() ) / ( m_ppu * tickscale_mid * 2 ); ticks++ )
        {
            qreal y = m_ppu * tickscale_mid * ticks;
            painter->drawLine( QPointF( center_x - 15, center_y + y ), QPointF( center_x + 15, center_y + y ) );
            painter->drawLine( QPointF( center_x - 15, center_y - y ), QPointF( center_x + 15, center_y - y ) );
        }

        for( int ticks = 0; ticks < ( boundingRect().height() ) / ( m_ppu * tickscale_max * 2 ); ticks++ )
        {
            qreal y = m_ppu * tickscale_max * ticks;
            painter->drawLine( QPointF( center_x - 25, center_y + y ), QPointF( center_x + 25, center_y + y ) );
            painter->drawLine( QPointF( center_x - 25, center_y - y ), QPointF( center_x + 25, center_y - y ) );

            if( tickscale_txt == tickscale_max && ticks != 0 )
            {
                QString tickText = QString::number( ticks * tickscale_txt, 'f', precision_array[ minor_tick_index ] );
                painter->drawText( center_x + 28, center_y + y + tickTextHeight/2, tickText );
                painter->drawText( center_x + 28, center_y - y + tickTextHeight/2, tickText );
            }
        }
    }
    else
    {
        // Draw a horizontal ruler
        QString divisionText = QString::number( tickscale_min, 'f', tick_min_precision ) + "mm divisions";
        int divisionTextWidth = fm.width(divisionText);

        painter->drawLine( QPointF( center_x, center_y - 40 ), QPointF( center_x, center_y + 40 ) );
        painter->drawLine( QPointF( 0, center_y ), QPointF( boundingRect().width(), center_y ) );

        painter->drawText( boundingRect().width() - divisionTextWidth, center_y + 40, divisionText );
        for( int ticks = 0; ticks < ( boundingRect().width() ) / ( m_ppu * tickscale_min * 2 ); ticks++ )
        {
            qreal x = m_ppu * tickscale_min * ticks;
            painter->drawLine( QPointF( center_x - x, center_y + 5 ), QPointF( center_x - x, center_y - 5 ) );
            painter->drawLine( QPointF( center_x + x, center_y + 5 ), QPointF( center_x + x, center_y - 5 ) );
        }

        for( int ticks = 0; ticks < ( boundingRect().width() ) / ( m_ppu * tickscale_mid * 2 ); ticks++ )
        {
            qreal x = m_ppu * tickscale_mid * ticks;
            painter->drawLine( QPointF( center_x - x, center_y + 15 ), QPointF( center_x - x, center_y - 15 ) );
            painter->drawLine( QPointF( center_x + x, center_y + 15 ), QPointF( center_x + x, center_y - 15 ) );
        }

        for( int ticks = 0; ticks < ( boundingRect().width() ) / ( m_ppu * tickscale_max * 2 ); ticks++ )
        {
            qreal x = m_ppu * tickscale_max * ticks;
            painter->drawLine( QPointF( center_x - x, center_y + 25 ), QPointF( center_x - x, center_y - 25 ) );
            painter->drawLine( QPointF( center_x + x, center_y + 25 ), QPointF( center_x + x, center_y - 25 ) );
            if( tickscale_txt == tickscale_max && ticks != 0 )
            {
                QString tickText =  QString::number( ticks * tickscale_txt, 'f', precision_array[ minor_tick_index ] );
                int tickTextWidth = fm.width(tickText);
                /* prevent drawing outside boundingRect */
                if( center_x + x + tickTextWidth/2 + 2  < boundingRect().width() )
                {
                    painter->drawText( center_x + x - tickTextWidth/2 + 2, center_y - 28, tickText );
                    painter->drawText( center_x - x - tickTextWidth/2 + 2, center_y - 28, tickText );
                }
            }
        }
    }
}


static const qreal tickscale_array_imp[] = { 0.0002, 0.0005, 0.0010, 0.0020, 0.0050, 0.0100, 0.0200, 0.0500, 0.100, 0.200, 0.500, 1.0 };
void Ruler::drawImperialRuler( QPainter *painter )
{
    const int precision_array[] =  { 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0 };

    qreal tickscale_min;
    qreal tickscale_max;
    qreal tickscale_txt;
    int tickTextHeight = 10;

    int minor_tick_index = 6;

    /* Decide active ticks and label */
    for( uint32_t i = 2; i < ( sizeof( tickscale_array_imp ) / sizeof(qreal) ); i++ )
    {
        if( ( m_fov_vertical_mm / ( tickscale_array_imp[ i ] * 25.4 ) ) > 6.0 )
        {
            minor_tick_index = i;
        }
    }

    tickscale_min = tickscale_array_imp[ minor_tick_index - 2 ];
    tickscale_max = tickscale_array_imp[ minor_tick_index ];
    tickscale_txt = tickscale_max;

    QPen pen( m_color, 1 );
    QFont font;
    font.setPixelSize( 12 );
    QFontMetrics fm(font);

    painter->setFont( font );
    painter->setPen( pen );
    painter->setRenderHints( QPainter::HighQualityAntialiasing, true );
    painter->fillRect( boundingRect(), Qt::transparent );

    int center_x = (int) boundingRect().width() / 2;
    int center_y = (int) boundingRect().height() / 2;

    if( boundingRect().height() > boundingRect().width() )
    { // Draw a vertical ruler
        int precision = ( tickscale_min < 0.001 ) ? 4 : 3;
        QString divisionText = QString::number( tickscale_min, 'f', precision ) + "\" divisions";
        int divisionTextWidth = fm.width(divisionText);
        painter->drawLine( QPointF( center_x, 0 ), QPointF( center_x, boundingRect().height() ) );
        painter->drawLine( QPointF( center_x - 40, center_y ), QPointF( center_x + 40, center_y ) );
        painter->drawText( center_x - divisionTextWidth - 40, 20,  divisionText );

        for( int ticks = 0; ticks < ( boundingRect().height() ) / ( m_ppuImp * tickscale_min * 2 ); ticks++ )
        {
            qreal y = m_ppuImp * tickscale_min * ticks;
            painter->drawLine( QPointF( center_x - 15, center_y + y ), QPointF( center_x + 15, center_y + y ) );
            painter->drawLine( QPointF( center_x - 15, center_y - y ), QPointF( center_x + 15, center_y - y ) );
        }

        for( int ticks = 0; ticks < ( boundingRect().height() ) / ( m_ppuImp * tickscale_max * 2 ); ticks++ )
        {
            qreal y = m_ppuImp * tickscale_max * ticks;
            painter->drawLine( QPointF( center_x - 25, center_y + y ), QPointF( center_x + 25, center_y + y ) );
            painter->drawLine( QPointF( center_x - 25, center_y - y ), QPointF( center_x + 25, center_y - y ) );

            if( tickscale_txt == tickscale_max && ticks != 0 )
            {
                QString tickText = QString::number( ticks * tickscale_txt, 'f', precision_array[ minor_tick_index ] );
                painter->drawText( center_x + 28, center_y + y + tickTextHeight/2, tickText );
                painter->drawText( center_x + 28, center_y - y + tickTextHeight/2, tickText );
            }
        }
    }
    else
    {
        // Draw a horizontal ruler
        int precision = ( tickscale_min < 0.001 ) ? 4 : 3;
        QString divisionText = QString::number( tickscale_min, 'f', precision ) + "\" divisions";
        int divisionTextWidth = fm.width(divisionText);

        painter->drawLine( QPointF( center_x, center_y - 40 ), QPointF( center_x, center_y + 40 ) );
        painter->drawLine( QPointF( 0, center_y ), QPointF( boundingRect().width(), center_y ) );
        painter->drawText( boundingRect().width() - divisionTextWidth, center_y + 40, divisionText );

        for( int ticks = 0; ticks < ( boundingRect().width() ) / ( m_ppuImp * tickscale_min * 2 ); ticks++ )
        {
            qreal x = m_ppuImp * tickscale_min * ticks;
            painter->drawLine( QPointF( center_x - x, center_y + 15 ), QPointF( center_x - x, center_y - 15 ) );
            painter->drawLine( QPointF( center_x + x, center_y + 15 ), QPointF( center_x + x, center_y - 15 ) );
        }

        for( int ticks = 0; ticks < ( boundingRect().width() ) / ( m_ppuImp * tickscale_max * 2 ); ticks++ )
        {
            qreal x = m_ppuImp * tickscale_max * ticks;
            painter->drawLine( QPointF( center_x - x, center_y + 25 ), QPointF( center_x - x, center_y - 25 ) );
            painter->drawLine( QPointF( center_x + x, center_y + 25 ), QPointF( center_x + x, center_y - 25 ) );
            if( tickscale_txt == tickscale_max && ticks != 0 )
            {
                QString tickText =  QString::number( ticks * tickscale_txt, 'f', precision_array[ minor_tick_index ] );
                int tickTextWidth = fm.width(tickText);
                /* prevent drawing outside boundingRect */
                if( center_x + x + tickTextWidth/2 + 2 < boundingRect().width() )
                {
                    painter->drawText( center_x + x - tickTextWidth/2 + 2, center_y - 28, tickText );
                    painter->drawText( center_x - x - tickTextWidth/2 + 2, center_y - 28, tickText );
                }
            }
        }
    }
}

void Ruler::wheelEvent(QGraphicsSceneWheelEvent *event)
{
    emit sendWheelEvent(event->delta() / 120);
}

void print_timestamp(){
    clock_t t1, t2;

        t1 = clock();

//        int i;

//        for(i = 0; i < 1000000; i++)
//        {
//            int x = 90;
//        }

//        t2 = clock();

        float diff = ((float)(t1) / 1000000.0F ) * 1000;
        logger::debug("%fms\n",diff);
}

void Ruler::paint( QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget )
{
    print_timestamp();
    //logger::debug("Paint(ruler) call time: %f\n", (double)(std::clock()/CLOCKS_PER_SEC) );

    //updatesEnabled();
    if( m_metricUnits )
    {
        if(m_repaint_needed) widget->setUpdatesEnabled(false);
        drawMetricRuler( painter );
        if(m_repaint_needed) widget->setUpdatesEnabled(true);
    }
    else
    {
        if(m_repaint_needed) widget->setUpdatesEnabled(false);
        drawImperialRuler( painter );
        if(m_repaint_needed) widget->setUpdatesEnabled(true);
    }


    if(m_repaint_needed){
       //update();
       widget->update();
       m_repaint_needed=false;
    }
}
