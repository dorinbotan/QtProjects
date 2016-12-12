#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QCoreApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QInputDialog>
#include <QLineEdit>
#include <QTextEdit>
#include <QWSServer>
#include <QKbdDriverFactory>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

private slots:
    void handleButton();

private:
    void setLayout(QString layout);

    QStringList layouts = (QStringList() << "ad" << "af" << "al" << "am" << "at" << "az" <<
                           "ba" << "bd" << "be" << "bg" << "br" << "bt" << "bw" << "by" <<
                           "ca" << "cd" << "ch" << "cn" << "cz" << "de" << "dk" << "ee" <<
                           "es" << "et" << "fi" << "fo" << "fr" << "gb" << "ge" << "gh" <<
                           "gn" << "gr" << "hr" << "hu" << "ie" << "il" << "in" << "iq" <<
                           "ir" << "is" << "it" << "jp" << "ke" << "kg" << "kh" << "kr" <<
                           "kz" << "la" << "lk" << "lt" << "lv" << "ma" << "me" << "mk" <<
                           "ml" << "mm" << "mn" << "mt" << "mv" << "ng" << "nl" << "no" <<
                           "np" << "ph" << "pk" << "pl" << "pt" << "ro" << "rs" << "ru" <<
                           "se" << "si" << "sk" << "sn" << "sy" << "th" << "tj" << "tm" <<
                           "tr" << "tz" << "ua" << "us" << "uz" << "vn" << "za");

    QPushButton *m_button;
    QInputDialog *m_input;
    QTextEdit *m_lineEdit;

    int i = 0;
};

#endif // MAINWINDOW_H
