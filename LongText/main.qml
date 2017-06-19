import QtQuick 1.1

Item {
    width: 600
    height: 300

    Rectangle {
        anchors.fill: parent
        anchors.margins: 100
        color: "#AAAAAA"

        Text {
            anchors.fill: parent
            font.pixelSize: 24

            text: "Veryveryveryveryveryveryverylong.jpg"

            elide: Text.ElideRight
        }
    }
}
