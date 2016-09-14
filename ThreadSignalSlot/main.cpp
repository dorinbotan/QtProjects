#include <QApplication>
#include <QThread>
#include <QTimer>
#include <QLCDNumber>
#include <QDebug>

class MyThread : public QThread
{
    Q_OBJECT

private:
    int m_nValue;

public:
    MyThread() : m_nValue(10)
    {
    }

    void run()
    {
        while(true)
        {
            qDebug() << m_nValue;
            usleep(10000);
        }

        exec();
    }

signals:
    void finished();
    void currentValue(int);

public slots:
    void slotNextValue()
    {
        emit(currentValue(--m_nValue));

        if(m_nValue == 0)
        {
            emit finished();
        }
    }
};

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QLCDNumber lcd;
    MyThread thread;

    QTimer timer;
    QObject::connect(&timer, SIGNAL(timeout()), &thread, SLOT(slotNextValue()));
    timer.start(1000);

    QObject::connect(&thread, SIGNAL(currentValue(int)), &lcd, SLOT(display(int)));
    QObject::connect(&thread, SIGNAL(finished()), &app, SLOT(quit()));

    lcd.setSegmentStyle(QLCDNumber::Filled);
    lcd.display(10);
    lcd.resize(220, 90);
    lcd.show();
    thread.start();
    return app.exec();
}
#include "main.moc"
