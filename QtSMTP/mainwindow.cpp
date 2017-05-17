#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QDeclarativeItem *parent)
    : QDeclarativeItem(parent)
{
}

void MainWindow::sendEmail()
{
    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);
    smtp.setUser("Sender gmail");
    smtp.setPassword("Sender password");

    MimeMessage message;
    message.setSender(new EmailAddress("sender gmail", "Dorin Botan"));
    message.addRecipient(new EmailAddress("recipient mail", "Dorin Botan"));
    message.setSubject("SmtpClient for Qt - Demo");

    MimeText text;
    text.setText("Hi,\nThis is a simple email message.\n");
    message.addPart(&text);

    smtp.connectToHost();
    smtp.login();
    smtp.sendMail(message);
    smtp.quit();

    qDebug() << "Sent";
}
