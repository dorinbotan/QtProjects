import QtQuick 1.1

Rectangle {
    width: 300
    height: 300
    color: "red"
    opacity: 0.5

    MouseArea {
        anchors.fill: parent
        hoverEnabled: true

        onEntered: parent.opacity = 1
        onExited: parent.opacity = 0.5

        onPressed: parent.color = "green"
        onReleased: parent.color = "red"
    }
}
