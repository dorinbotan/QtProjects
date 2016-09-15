import QtQuick 1.1

Item {
    width: 360
    height: 360

    Text {
        anchors.centerIn: parent
        text: "Hello QML"
    }

    MouseArea {
        anchors.fill: parent

        onClicked: Qt.quit();
    }
}
