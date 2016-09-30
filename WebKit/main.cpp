#include <QtGui>
#include <QtWebKit>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWebView webView;

    webView.load(QUrl("http://www.google.ru"));
    webView.show();

    return app.exec();
}
