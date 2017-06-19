#ifndef LISTUPDATER_H
#define LISTUPDATER_H

#include <QObject>
#include <QHash>

class ListUpdater : public QObject
{
    Q_OBJECT

public:
    ListUpdater();

signals:
    void signalHashmapChanged( QHash<QString, QString> );
};

#endif // LISTUPDATER_H
