import QtQuick 1.1

Rectangle {
    width: 300
    height: 300

    signal mousePositionChanged(real x, real y);

    onMousePositionChanged: {
        txt.text = "<h1>X:" + x + "; Y:" + y + "</h1>"
    }

    Text {
        id: txt
        text: "<h1>Move the Mouse</h1>"
        anchors.centerIn: parent
    }

    MouseArea {
        anchors.fill: parent
        hoverEnabled: true

        onMousePositionChanged: parent.mousePositionChanged(mouseX, mouseY);
    }
}
