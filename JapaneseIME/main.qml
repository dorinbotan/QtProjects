import QtQuick 1.1

Rectangle {
    width: 600
    height: 300

    TextEdit {
        anchors.fill: parent
        focus: true
        onTextChanged: console.log( "<" + text + ">" )
    }
}
