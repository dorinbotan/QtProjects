import QtQuick 1.1

Rectangle {
    width: 510
    height: 110
    color: "red"
    border.width: 1
    border.color: "#000"

    Rectangle {
        height: 23
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        color: "blue"
    }
}
