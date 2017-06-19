import QtQuick 1.1

Item {
    width: 500
    height: 500

    ConfirmWindow {
        anchors.centerIn: parent
        width: 460
        height: 140
        header: "Hello world!"
        text: qsTr("Image with the given name exists.<br> Do you want to overrite it?")

        onClicked: console.log(confirm)
    }
}
