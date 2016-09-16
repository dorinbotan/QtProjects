import QtQuick 1.1

Rectangle {
    id: rect
    width: 360
    height: 360
    state: "State2"

    Text {
        id: txt
        anchors.centerIn: parent
    }

    states: [
        State {
            name: "State1"
            PropertyChanges {
                target: rect
                color: "lightGreen"
                width: 150
                height: 60
            }
            PropertyChanges {
                target: txt
                text: "State2: Click Me!"
            }
        },
        State {
            name: "State2"
            PropertyChanges {
                target: rect
                color: "yellow"
                width: 200
                height: 120
            }
            PropertyChanges {
                target: txt
                text: "State1: Click Me!"
            }
        }
    ]
    transitions: [
        Transition {
            from: "State1"
            to: "State2"
            PropertyAnimation {
                target: rect;
                properties: "width,height";
                easing.type: Easing.OutBounce
                duration: 500
            }
            PropertyAnimation {
                target: rect;
                properties: "color";
                easing.type: Easing.InCirc
                duration: 150
            }
        },
        Transition {
            from: "State2"
            to: "State1"
            PropertyAnimation {
                target: rect
                properties: "width,height,color"
                easing.type: Easing.InCirc
                duration: 500
            }
            PropertyAnimation {
                target: txt;
                properties: "text";
                easing.type: Easing.InCirc
                duration: 500
            }
        }
    ]

    MouseArea {
        anchors.fill: rect

        onClicked: rect.state = (rect.state == "State1") ? "State2" : "State1"
    }
}
