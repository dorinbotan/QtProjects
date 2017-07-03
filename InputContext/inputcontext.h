#ifndef INPUTCONTEXT_H
#define INPUTCONTEXT_H

#include <QInputContext>
#include <QApplication>
#include <QPointer>

class InputContext : public QInputContext
{
    Q_OBJECT

public:
    InputContext();
    ~InputContext();

    bool filterEvent( const QEvent *event );

    QString identifierName();
    QString language();

    bool isComposing() const;
    void reset();

    Q_INVOKABLE void sendCharacter( const QChar );

private:
    void updatePosition();
};

#endif // INPUTCONTEXT_H
