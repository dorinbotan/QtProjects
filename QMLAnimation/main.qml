import QtQuick 1.1

Rectangle {
    width: 300
    height: 300
    color: "lightgreen"

    Image {
        id: img
        width: parent.width / 4
        height: parent.height / 4
        source: "Smile.png"
    }

    PropertyAnimation {
        target: img
        properties: "x,y"
        from: 0 - img.height
        to: 300
        duration: 1600
        running: true
        loops: Animation.Infinite
        easing.type: Easing.OutInBack
    }
}
