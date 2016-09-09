#include <QtGui>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget wgt;
    QCursor cur(QPixmap("C:/Users/db/Documents/BasicWidget/images/cursor.png"));

    QWidget* pwgt1 = new QWidget(&wgt);
    QPalette pall;
    pall.setColor(pwgt1->backgroundRole(), Qt::blue);
    pwgt1->setPalette(pall);
    pwgt1->resize(150, 150);
    pwgt1->move(50, 50);
    pwgt1->setAutoFillBackground(true);
    pwgt1->setCursor(Qt::PointingHandCursor);

    QWidget* pwgt2 = new QWidget(&wgt);
    QPalette pal2;
    pal2.setBrush(pwgt2->backgroundRole(), QBrush(QPixmap("C:/Users/db/Documents/BasicWidget/images/stone.jpg")));
    pwgt2->setPalette(pal2);
    pwgt2->resize(150, 150);
    pwgt2->move(100, 100);
    pwgt2->setAutoFillBackground(true);
    pwgt2->setCursor(cur);

    wgt.resize(300, 300);
    wgt.show();

    return app.exec();
}
