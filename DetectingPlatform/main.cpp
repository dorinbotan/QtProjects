#include <QApplication>
#include <QDebug>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

#ifdef Q_OS_LINUX
    qDebug() << "Linux";
#else
#ifdef Q_OS_WIN32
    qDebug() << "Windows32" << QSysInfo::WindowsVersion;
#else
#ifdef Q_OS_WIN64
    qDebug() << "Windows64" << QSysInfo::WindowsVersion;
#else
#ifdef Q_OS_MAC
    qDebug() << "Mac OS X" << QSysInfo::MacintoshVersion;
#else
#ifdef Q_OS_FREEBSD
    qDebug() << "FreeBSD";
#endif
#endif
#endif
#endif
#endif

if (QSysInfo::ByteOrder == QSysInfo::BigEndian)
{
    qDebug() << "System is big endian";
}
else
{
    qDebug() << "System is little endian";
}

    return app.exec();
}
