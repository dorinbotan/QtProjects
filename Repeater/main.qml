import QtQuick 1.1
import MyLibrary 1.0

Rectangle {
    width: 300
    height: 500
    color: "#eee"

    ListModel {
        id: presetModel
        ListElement { name: "Apple"; cost: 2.45 }
        ListElement { name: "Very big african brown banana not sweet"; cost: 3.25 }
        ListElement { name: "Orange"; cost: 3.25 }
        ListElement { name: "Banana"; cost: 1.95 }
    }

    Column {
        Repeater {
            model: presetModel

            Item {
                width: 1
                height: setting.height

                Text {
                    id: setting
                    x: 9
                    width: 150
                    wrapMode: Text.WordWrap
                    color: "#000"
                    text: name
                }

                Text {
                    color: "#000"
                    anchors.left: setting.right
                    text: cost
                }
            }
        }
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            parent.color = Qt.rgba(Math.random(),Math.random(),Math.random(),1);
            presetModel.append({ name: "Test fruit", cost: 2.45 })
        }
    }

    Connections {
        target: ListUpdater

        onSignalHashmapChanged: {
            console.log("123")
        }
    }
}
