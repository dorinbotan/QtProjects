#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDeclarativeItem>
//#include "C:/Users/db/Documents/Qt/QtSMTP/smtp/SmtpMime"
#include "C:/Users/db/Documents/Qt/QtSMTP/smtp/smtpclient.h"
#include "C:/Users/db/Documents/Qt/QtSMTP/smtp/mimetext.h"
#include "C:/Users/db/Documents/Qt/QtSMTP/smtp/emailaddress.h"

class MainWindow : public QDeclarativeItem
{
    Q_OBJECT

public:
    MainWindow(QDeclarativeItem * = 0);

public slots:
    Q_INVOKABLE void sendEmail();
};

#endif // MAINWINDOW_H
