#include "buttons.h"

Buttons::Buttons(QWidget *pwgt/*=0*/) : QGroupBox("QGroupBox", pwgt)
{
    resize(120, 150);
    setCheckable(true);
    setChecked(true);

    m_pradRed = new QRadioButton("&Red");
    m_pradGreen = new QRadioButton("&Green");
    m_pradBlue = new QRadioButton("&Blue");
    m_pradGreen->setChecked(true);

    connect(m_pradRed, SIGNAL(clicked()), SLOT(slotButtonClicked()));
    connect(m_pradGreen, SIGNAL(clicked()), SLOT(slotButtonClicked()));
    connect(m_pradBlue, SIGNAL(clicked()), SLOT(slotButtonClicked()));

    m_pchk = new QCheckBox("&Light");
    m_pchk->setChecked(true);
    connect(m_pchk, SIGNAL(clicked()), SLOT(slotButtonClicked()));

    QPushButton *pcmd = new QPushButton("&Exit");
    connect(pcmd, SIGNAL(clicked()), qApp, SLOT(quit()));

    QVBoxLayout *pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(m_pradRed);
    pvbxLayout->addWidget(m_pradGreen);
    pvbxLayout->addWidget(m_pradBlue);
    pvbxLayout->addWidget(m_pchk);
    pvbxLayout->addWidget(pcmd);
    setLayout(pvbxLayout);

    slotButtonClicked();
}

void Buttons::slotButtonClicked()
{
    QPalette pal = palette();

    int nLight = m_pchk->isChecked() ? 150 : 80;

    if( m_pradRed->isChecked() )
    {
        pal.setColor(QPalette::Window, QColor(Qt::red).light(nLight));
    }
    else if( m_pradGreen->isChecked() )
    {
        pal.setColor(QPalette::Window, QColor(Qt::green).light(nLight));
    }
    else if( m_pradBlue->isChecked() )
    {
        pal.setColor(QPalette::Window, QColor(Qt::blue).light(nLight));
    }

    if( !m_pchk->isChecked() )
        pal.setColor(QPalette::WindowText, QColor(Qt::white).light(nLight));

    parentWidget()->setPalette(pal);
}

void Buttons::wheelEvent ( QWheelEvent * event )
{
    qDebug() << event->delta() / 120;
}
