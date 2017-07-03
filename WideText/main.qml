import QtQuick 1.1

Rectangle {
    width: 600
    height: 300

    color: "red"

    Rectangle {
        anchors.centerIn: parent
        width: 100
        height: 100

        Text {
            id: myText
            anchors.fill: parent
            text: "Wwwwwwwwwwwwwwwwwwwwwwwwwww123 exists."
            elide: Text.ElideMiddle
        }
    }

    MouseArea {
        anchors.fill: parent

        onClicked: {
//            console.log( myText. )
        }
    }
}
