#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDeclarativeItem>
#include <QPainter>

class MainWindow : public QDeclarativeItem
{
    Q_OBJECT

public:
    MainWindow( QDeclarativeItem *parent = 0 );

    void paint( QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0 );

public slots:
    void open();

private:
//    QAction *actionOpen;
};

#endif // MAINWINDOW_H
