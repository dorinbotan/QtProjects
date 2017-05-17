import QtQuick 1.1
import MyLib 1.0

Item {
    width: 600
    height: 300

    MainWindow {
        id: mainWindow
    }

    MouseArea {
        anchors.fill: parent
        onClicked: mainWindow.sendEmail();
    }
}
