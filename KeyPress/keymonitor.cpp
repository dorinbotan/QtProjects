#include "keymonitor.h"

#include <QDebug>
#include <QKeyEvent>

KeyMonitor::KeyMonitor(QWidget *parent)
{
}

void KeyMonitor::keyPressEvent(QKeyEvent *event)
{
    qDebug() << event->key();
}
