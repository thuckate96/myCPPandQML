#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "src/numberup.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    QQmlContext* context = engine.rootContext();
    NumberUp nu;
    context->setContextProperty("numberUp", &nu);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    return app.exec();
}
