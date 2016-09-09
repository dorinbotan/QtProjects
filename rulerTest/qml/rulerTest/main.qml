// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5

import QtQuick 1.1
import MyLibrary 1.0

Rectangle {
    width: 1800
    height: 800
    x: 100
    color : "white"

    signal wheelEvent(int delta)

    onWheelEvent: {
        verticalRulerId.fov_vertical_mm += delta;
        horizontalRulerId.fov_vertical_mm += delta;
    }

    MouseArea {
        anchors.fill: parent
        focus : true

        onPositionChanged: {
            verticalRulerId.fov_vertical_mm = 1 + mouse.x
            horizontalRulerId.fov_vertical_mm =  1 + mouse.x
        }
    }

    Ruler{
      id  : verticalRulerId
      name:  "verticalRuler"
      objectName: "verticalRuler"
      width:120
      height: parent.height
      anchors.centerIn: parent
      fov_vertical_pix: parent.height //1080.0
      color:"black"
      //metricUnits : false
      visible:true
    }

    Ruler{
      id:   horizontalRulerId
      name:  "horizontalRuler"
      objectName: "horizontalRuler"
      width:parent.height
      height: 120
      anchors.centerIn: parent
      fov_vertical_pix: parent.height //1080.0
      color:"black"
      //metricUnits : false
      visible:true
    }

    NonScalableArea{
        x:800;
        y:350;
        height: 100;
        width: 100;

        Rectangle {
            color: "red";
            anchors.fill: parent;

            Text {
                text: "NonScalable"
                font.pointSize: 10
                color: "black"
                anchors.centerIn: parent;
            }
        }
    }

    Rectangle {
        x:600;
        y:350;
        height: 100;
        width: 100;
        color: "green";

        Text {
            text: "Scalable"
            font.pointSize: 10
            color: "black"
            anchors.centerIn: parent;
        }
    }
}
