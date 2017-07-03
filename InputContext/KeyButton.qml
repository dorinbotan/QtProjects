import QtQuick 1.1

Rectangle {
    width: 60
    height: 50
    color: "#35322f"
//    color: "#1e1b18"
    radius: 2

    property alias text: keyText.text
    property string action: ""
    property alias fontColor: keyText.color
    property alias pixelsize: keyText.font.pixelSize
    signal clicked()

    Text {
        id: keyText
        anchors.centerIn: parent
        font.pixelSize: 20
        color: "#fff"
        font.bold: false
        text: ""
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            inputContext.sendCharacter( text.charCodeAt(0) )
//            inputContext.sendCharacter( action.charCodeAt(0) )
            parent.clicked()
        }
    }
}
