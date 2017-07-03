#include "inputcontext.h"

#include <QDebug>

InputContext::InputContext(){}

InputContext::~InputContext(){}

bool InputContext::filterEvent( const QEvent *event )
{
    if( event->type() == QEvent::RequestSoftwareInputPanel )
    {
        updatePosition();
        return true;
    }
    else if( event->type() == QEvent::CloseSoftwareInputPanel )
    {
        return true;
    }
    return false;
}

QString InputContext::identifierName()
{
    return "JP";
}

QString InputContext::language()
{
    return "ja_JP";
}

bool InputContext::isComposing() const {}

void InputContext::reset(){}

void InputContext::sendCharacter( const QChar character )
{
//    qDebug() << character.unicode();

    uint key = character.unicode();

    if( key == 8592 )
        key = Qt::Key_Backspace;
    if( key == 8679 )
        key = Qt::Key_CapsLock;

    QPointer<QWidget> w = focusWidget();

    if( !w )
        return;

    QKeyEvent keyPress( QEvent::KeyPress, key, Qt::NoModifier, QString(key));
    QApplication::sendEvent(w, &keyPress);

//    if( !w )
//        return;

//    QKeyEvent keyRelease( QEvent::KeyPress, character.unicode(), Qt::NoModifier, QString() );
//    QApplication::sendEvent( w, &keyRelease );
}

void InputContext::updatePosition()
{
    QWidget *widget = focusWidget();
    if( !widget )
        return;

    QRect widgetRect = widget->rect();
    QPoint panelPos = QPoint( widgetRect.left(), widgetRect.bottom() + 2 );
    panelPos = widget->mapToGlobal( panelPos );
}
