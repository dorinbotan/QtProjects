#include <QApplication>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QLabel>
#include <QWheelEvent>

class myLabel: public QLabel
{
  public:
    myLabel()
    {
      this->setAlignment(Qt::AlignCenter);

      //Default Label Value
      this->setText("No Value");
    };
    ~ myLabel(){};

    void wheelEvent ( QWheelEvent * event )
    {
      //Add current step.
      //event->delta() can be negative or positive
      x += event->delta()/120;

      this->setText("Total Steps: "+QString::number(x));
    };


public:
 static  int x;
};

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QMainWindow *window = new QMainWindow();

    window->setWindowTitle(QString::fromUtf8("QT - Mouse Wheel Scroll Steps"));
    window->resize(300, 250);

    QWidget *centralWidget = new QWidget(window);
    QHBoxLayout* layout = new QHBoxLayout(centralWidget);

    myLabel* scrollStepLabel = new myLabel();
    layout->addWidget(scrollStepLabel);

    window->setCentralWidget(centralWidget);

    window->show();
    return app.exec();
}
int myLabel::x=0;
