import QtQuick 1.1

Rectangle {
    width: childrenRect.width
    height: childrenRect.height
    color: "#000000"

    property variant keys: [[ "q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "a", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "c", "v", "b", "n", "m", ",", "." ],
                            [ "Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P", "A", "S", "D", "F", "G", "H", "J", "K", "L", "Z", "X", "C", "V", "B", "N", "M", ",", "." ]]
    property int layout: 0

    Column {
        spacing: 4

        Row {
            anchors.horizontalCenter: parent.horizontalCenter
            spacing: 4

            KeyButton { text: keys[layout][0] }
            KeyButton { text: keys[layout][1] }
            KeyButton { text: keys[layout][2] }
            KeyButton { text: keys[layout][3] }
            KeyButton { text: keys[layout][4] }
            KeyButton { text: keys[layout][5] }
            KeyButton { text: keys[layout][6] }
            KeyButton { text: keys[layout][7] }
            KeyButton { text: keys[layout][8] }
            KeyButton { text: keys[layout][9] }
            KeyButton { text: "\u2190"; color: "#1e1b18" }
        }

        Row {
//            anchors.horizontalCenter: parent.horizontalCenter
            anchors.right: parent.right
            spacing: 4

            KeyButton { text: keys[layout][10] }
            KeyButton { text: keys[layout][11] }
            KeyButton { text: keys[layout][12] }
            KeyButton { text: keys[layout][13] }
            KeyButton { text: keys[layout][14] }
            KeyButton { text: keys[layout][15] }
            KeyButton { text: keys[layout][16] }
            KeyButton { text: keys[layout][17] }
            KeyButton { text: keys[layout][18] }
            KeyButton { text: "NEXT"; width: 100; fontColor: "#86c849"; color: "#1e1b18"; pixelsize: 15 }
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter
            spacing: 4

            KeyButton { text: "\u21E7"; color: "#1e1b18"; pixelsize: 40; onClicked: layout = layout == 0 }
            KeyButton { text: keys[layout][19] }
            KeyButton { text: keys[layout][20] }
            KeyButton { text: keys[layout][21] }
            KeyButton { text: keys[layout][22] }
            KeyButton { text: keys[layout][23] }
            KeyButton { text: keys[layout][24] }
            KeyButton { text: keys[layout][25] }
            KeyButton { text: keys[layout][26] }
            KeyButton { text: keys[layout][27] }
            KeyButton { text: "\u21E7"; color: "#1e1b18"; pixelsize: 40; onClicked: layout = layout == 0 }
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter
            spacing: 4

            KeyButton { text: "&123"; width: 100; color: "#1e1b18"; pixelsize: 15 }
            KeyButton { text: "\u238a" }
            KeyButton { text: " English "; width: 340; pixelsize: 15; fontColor: "#999999"; }
            KeyButton { text: "'" }
            KeyButton { text: ":-)" }
            KeyButton { text: "\u2328"; color: "#1e1b18"; pixelsize: 40 }
        }
    }
}
