#include <QApplication>
#include <QHBoxLayout>
#include <QLabel>
#include <QWheelEvent>

class mLabel: public QLabel
{
    public:
        mLabel()
        {
            this->setAlignment(Qt::AlignCenter);
            this->setText(QString::number(x));
        };

        void wheelEvent ( QWheelEvent * event )
        {
            x += event->delta()/120;
            this->setText(QString::number(x));
        };

        static int x;
};

int mLabel::x=0;

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget centralWidget;

    QHBoxLayout* layout = new QHBoxLayout();
    layout->addWidget(new mLabel());

    centralWidget.setLayout(layout);
    centralWidget.resize(450, 450);
    centralWidget.show();
    return app.exec();
}
