import QtQuick 1.1

Rectangle {
    width: 1920
    height: 1080
    color: "transparent"
    opacity: 0.5

    TextEdit {
        text: "Hello world!"
        anchors.centerIn: parent
        font.pointSize: 100
        selectByMouse: true
    }
}
