#ifndef MIMEFILE_H
#define MIMEFILE_H

#include <QFile>
#include "smtpexports.h"
#include "mimepart.h"

class SMTP_EXPORT MimeFile : public MimePart
{
    Q_OBJECT
public:
    MimeFile(const QByteArray& stream, const QString& fileName);
    MimeFile(QFile *f);
    ~MimeFile();

protected:
    virtual void prepare();

    QFile* file;
};

#endif // MIMEFILE_H
