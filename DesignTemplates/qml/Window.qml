import QtQuick 1.1

Item {
    property alias header: headerText.text
    property alias contentRectangle: contentRectangle
    property bool draggable: false

    // -- Header --------------------------------------------------------------
    Rectangle {
        id: headerRectangle
        height: 23
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.right: parent.right
        color: "#0d0d0d"

        Text {
            id: headerText
            anchors.left: parent.left
            anchors.leftMargin: 10
            anchors.verticalCenter: parent.verticalCenter
            font.pixelSize: 12
            color: "#ffffff"
        }

        Image {
            width: 21
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.right: parent.right
            opacity: 0.4
            source: "icons/move.png"
            visible: draggable

            MouseArea {
                anchors.fill: parent
                hoverEnabled: true

                onEntered: parent.opacity = 1
                onExited: parent.opacity = 0.4
            }
        }
    }

    // -- Content -------------------------------------------------------------
    Rectangle {
        id: contentRectangle
        anchors.top: headerRectangle.bottom
//        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        color: "#cc222222"
    }
}
