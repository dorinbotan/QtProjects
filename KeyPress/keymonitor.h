#ifndef KEYMONITOR_H
#define KEYMONITOR_H

#include <QWidget>
#include <QAction>

class KeyMonitor : public QWidget
{
    Q_OBJECT

public:
    KeyMonitor(QWidget *parent = 0);

    void keyPressEvent(QKeyEvent *event);
};

#endif // KEYMONITOR_H
