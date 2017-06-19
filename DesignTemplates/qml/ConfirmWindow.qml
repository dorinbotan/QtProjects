import QtQuick 1.1

Window {
    id: windowRectangle
    contentRectangle.height: content.childrenRect.height + 20

    property alias text: contextText.text

    signal clicked( bool confirm )

    Item {
        id: content
        anchors.fill: parent.contentRectangle

        Rectangle {
            id: contextRectangle
            height: contextText.height + 2 * contextText.font.pixelSize
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.margins: 10

            Text {
                id: contextText
                width: parent.width
                anchors.centerIn: parent
                horizontalAlignment: Text.AlignHCenter
                font.pixelSize: 13
                wrapMode: Text.WordWrap
            }
        }

        Button {
            id: confirmButton
            anchors.top: contextRectangle.bottom
            anchors.right: parent.right
            anchors.margins: 10
            text: qsTr("OK")
            width: cancelButton.width
            onClicked: windowRectangle.clicked(true)
        }

        Button {
            id: cancelButton
            anchors.verticalCenter: confirmButton.verticalCenter
            anchors.right: confirmButton.left
            anchors.rightMargin: 10
            text: qsTr("Cancel")
            width: 80
            onClicked: windowRectangle.clicked(false)
        }
    }
}
