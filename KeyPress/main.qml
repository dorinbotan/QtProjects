import QtQuick 1.1

Rectangle {
    width: 600
    height: 300
    color: "#BBB"

    Rectangle {
        anchors.fill: parent
        anchors.margins: 10

        TextEdit {
            anchors.fill: parent
            anchors.margins: 5
            wrapMode: Text.Wrap
            focus: true

            Keys.onPressed: {
//                console.log(event.key)
            }
        }
    }
}
