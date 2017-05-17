#ifndef MIMETEXT_H
#define MIMETEXT_H

#include "mimepart.h"
#include "smtpexports.h"

class SMTP_EXPORT MimeText : public MimePart
{
public:
    MimeText(const QString &text = "");
    ~MimeText();

    void setText(const QString & text);

    const QString & getText() const;

protected:
    void prepare();

    QString text;
};

#endif // MIMETEXT_H
