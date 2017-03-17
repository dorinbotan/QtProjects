#include <QApplication>
#include <QWidget>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    app.setOverrideCursor(QCursor(QPixmap("C:/Users/db/Documents/Qt/CustomCursor/cursor.png")));

    QWidget wgt;
    wgt.show();

    return app.exec();
}
