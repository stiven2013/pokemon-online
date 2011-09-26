import QtQuick 1.0

Item
{
    width: 500
    height: 400

    Loader {
        id: loader
    }

    Connections {
        target: battle.scene
        onLaunched: {
            loader.source = "battlescene.qml"
        }
    }
}
