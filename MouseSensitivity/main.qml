import QtQuick 1.1
import MyLib 1.0

Item {
    width: 1920
    height: 1080

    MouseWindow
    {
        id: mouseWindow
        anchors.fill: parent

        MouseArea
        {
            anchors.fill: parent
            hoverEnabled: true

            onPositionChanged: mouseWindow.movePointer();
        }
    }
}
