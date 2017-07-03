import QtQuick 1.1

Item {
    width: childrenRect.width
    height: childrenRect.height

    Flickable {
        id: textArea
        width: virtualKeyboard.width
        height: 200
        contentHeight: textEdit.paintedHeight


        TextEdit {
            id: textEdit
            anchors.fill: parent
            focus: true
            wrapMode: Text.Wrap
            selectByMouse: true

            Keys.onPressed: {
//                console.log( event.key )
//                inputContext.sendCharacter( event.key )
            }
        }
    }

    VirtualKeyboard {
        id: virtualKeyboard
        anchors.top: textArea.bottom
    }
}
