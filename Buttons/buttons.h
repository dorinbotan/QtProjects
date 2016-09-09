#ifndef BUTTONS_H
#define BUTTONS_H

#include <QApplication>
#include <QGroupBox>
#include <QCheckBox>
#include <QRadioButton>
#include <QPushButton>
#include <QVBoxLayout>
#include <QPalette>
#include <QDebug>
#include <QWheelEvent>

class Buttons : public QGroupBox
{
    Q_OBJECT

private:
    QCheckBox *m_pchk;
    QRadioButton *m_pradRed;
    QRadioButton *m_pradGreen;
    QRadioButton *m_pradBlue;

public:
    Buttons(QWidget *pwgt = 0);
    void wheelEvent( QWheelEvent* );

public slots:
    void slotButtonClicked();
};

#endif // BUTTONS_H
