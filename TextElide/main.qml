import QtQuick 1.1

Item {
    width: 600
    height: 200

    Text {
        id: text
        anchors.fill: parent
        font.pixelSize: 20

//        maximumLineCount: 2
//        wrapMode: Text.Wrap
        elide: Text.ElideRight
        text: "Hello world Hello world Hello world Hello world Hello world Hello world Hello world Hello world Hello world Hello world Hello world !!!!!!!"
    }

    MouseArea {
        anchors.fill: parent

        onClicked: console.log( text.elide.toString() )
    }
}
