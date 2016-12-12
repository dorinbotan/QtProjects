#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{
    m_button = new QPushButton(layouts.at(i).toUpper(), this);
    m_button->setGeometry(QRect(QPoint(0, 0), QSize(1920, 30)));

    connect(m_button, SIGNAL (released()), this, SLOT (handleButton()));

    m_lineEdit = new QTextEdit(this);
    m_lineEdit->setGeometry(QRect(QPoint(0, 30), QSize(1920, 1050)));

    setLayout(layouts.at(i));
}

MainWindow::~MainWindow()
{

}

void MainWindow::handleButton()
{
    if(++i >= layouts.count())
        i = 0;

    setLayout(layouts.at(i));
    m_button->setText(layouts.at(i).toUpper());
}

void MainWindow::setLayout(QString layout)
{
    QWSServer::instance()->closeKeyboard();
    QWSServer::instance()->setKeyboardHandler(QKbdDriverFactory::create(QKbdDriverFactory::keys()[0], QString("keymap=keymaps/%1.qmap").arg(layout)));
}
