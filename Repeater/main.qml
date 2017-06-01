import QtQuick 1.1

Rectangle {
    width: 300
    height: 500
    color: "#eee"

//    Text {
//        id: s1
//        x: 9
//        width: 150
//        wrapMode: Text.WordWrap
//        font.pixelSize: 14
//        color: "#000"

//        anchors.top: parent.top
//        anchors.topMargin: 5

//        text: "Setting 1"
//    }

//    Text {
//        id: v1
//        font.pixelSize: 14
//        color: "#000"

//        anchors.top: s1.top
//        anchors.right: parent.right
//        anchors.rightMargin: 5

//        text: "value"
//    }

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
}
