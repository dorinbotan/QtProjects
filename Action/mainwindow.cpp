#include "mainwindow.h"

#include <QDebug>
#include <QToolBar>

MainWindow::MainWindow( QDeclarativeItem* )
{
    setFlag( QGraphicsItem::ItemHasNoContents, false );
}

void MainWindow::paint( QPainter *painter, const QStyleOptionGraphicsItem*, QWidget *widget )
{
    painter->fillRect(QRectF(widget->x(), 0, widget->width(), widget->height()), Qt::Dense7Pattern);
}

void MainWindow::open()
{
    qDebug() << "1";
}
