import QtQuick 1.1

Rectangle {
    id: parentRectangle
    height: (buttonValue.text == "") ? 0 : buttonValue.height * 1.5
    width: (buttonValue.text == "") ? 0 : buttonValue.width + buttonValue.font.pixelSize
    color: "#0d0d0d"
    border.width: 2
    border.color: "#777777"

    QtObject {
        id: _
        property string borderColor: parentRectangle.border.color
    }

    property alias text: buttonValue.text
    property alias font: buttonValue.font
    property bool highlight: false
    property string highlightColor: "#d0d0d0"

    signal clicked()

    onEnabledChanged: opacity = enabled ? 1.0 : 0.4
    onHighlightChanged:
        if( highlight == true )
        {
            _.borderColor = border.color
            border.color = highlightColor
        }
        else
        {
            border.color = _.borderColor
        }

    Text {
        id: buttonValue
        anchors.centerIn: parent
        font.pixelSize: 12
        color: "#ffffff"
    }

    MouseArea {
        anchors.fill: parent
        onClicked: parent.clicked()
    }
}
