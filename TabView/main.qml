import QtQuick 2.0
import QtQuick.Controls 2.0

Item {
    width: 1000
    height: 600

    TabView {
        Tab {
            title: "Red"
            Rectangle { color: "red" }
        }
        Tab {
            title: "Blue"
            Rectangle { color: "blue" }
        }
        Tab {
            title: "Green"
            Rectangle { color: "green" }
        }
    }
}
