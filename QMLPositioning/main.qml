import QtQuick 1.1

Rectangle {
    width: 360
    height: 360

    Grid {
        rows: 2
        columns: 2
        spacing: 10
        anchors.fill: parent

        Row {
            spacing: 10
            height: parent.height / 2 - 5
            width: parent.width / 2 - 5

            Rectangle {
                height: parent.height
                width: parent.width / 2 - 5
                color: "red"
            }

            Rectangle {
                height: parent.height
                width: parent.width / 2 - 5
                color: "black"
            }
        }

        Rectangle {
            height: parent.height / 2 - 5
            width: parent.width / 2 - 5
            color: "green"
        }

        Rectangle {
            height: parent.height / 2 - 5
            width: parent.width / 2 - 5
            color: "yellow"
        }

        Rectangle {
            height: parent.height / 2 - 5
            width: parent.width / 2 - 5
            color: "blue"
        }
    }
}
