#include <QtGui>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget wgt;

    QPushButton* pcmdA = new QPushButton("A");
    QPushButton* pcmdB = new QPushButton("B");
    QPushButton* pcmdC = new QPushButton("C");

    QBoxLayout* pbxLayout = new QBoxLayout(QBoxLayout::LeftToRight);
    pbxLayout->addWidget(pcmdB, 1);
    pbxLayout->addWidget(pcmdC, 1);
    pbxLayout->addStretch(2);

    QVBoxLayout* pvbxLayout = new QVBoxLayout();
    pvbxLayout->addWidget(pcmdA, 1);
    pvbxLayout->addLayout(pbxLayout);

    wgt.setLayout(pvbxLayout);
    wgt.resize(450, 50);
    wgt.show();

    return app.exec();
}
