import QtQuick 1.1

Rectangle {
    id: rect
    width: 360
    height: 360

    Image {
        id: img
        source: "smile.png"
        x: 10
        y: 10
        height: 100
        width: 100
        smooth: true

        Text {
            anchors.verticalCenter: img.verticalCenter
            anchors.top: img.bottom
            text: "Move the mouse!";
        }

        Behavior on x {
            NumberAnimation {
                duration: 1000
                easing.type: Easing.OutCirc
            }
        }

        Behavior on y {
            NumberAnimation {
                duration: 1000
                easing.type: Easing.OutCirc
            }
        }
    }

    MouseArea {
        anchors.fill: parent
        hoverEnabled: true

        onMousePositionChanged: {
            img.x = mouseX - 50
            img.y = mouseY - 50
        }
    }
}
