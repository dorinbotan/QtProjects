import QtQuick 1.1

Rectangle {
    width: 360
    height: 360

    Flickable {
        anchors.fill: parent
        contentHeight: image.height
        contentWidth: image.width

        Image {
            id: image
            source: "C:/Users/db/Documents/Qt/QMLFlickable/classes.png"
        }
    }
}
