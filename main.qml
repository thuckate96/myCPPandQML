import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 1.4

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Column{
        id: firstCol
        Text {
            id: txtHits
            text: numberUp.message
        }
        Button{
            id: btnHits
            text: "Up Hits!"
            onClicked: {
                numberUp.upHits()
            }
        }
        Button{
            id: btnExit
            text: "Exit"
            onClicked: {
                Qt.quit()
            }
        }
    }
}
