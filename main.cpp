#include <QApplication>
#include <QMapLibre/Map>
#include <QMapLibre/Settings>
#include <QMapLibreWidgets/GLWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Ücretsiz, API key gerektirmeyen vektör stil (OpenFreeMap).
    // Alternatif (çok hafif dünya haritası): https://demotiles.maplibre.org/style.json
    const QString styleUrl = "https://tiles.openfreemap.org/styles/liberty";

    QMapLibre::Settings settings;
    settings.setDefaultCoordinate(QMapLibre::Coordinate(41.0082, 28.9784)); // İstanbul (lat, lon)
    settings.setDefaultZoom(10);
    settings.setStyles({{styleUrl, "OpenFreeMap Liberty"}});

    QMapLibre::GLWidget widget(settings);
    widget.setWindowTitle("Basic MapLibre Native Map");
    widget.resize(1024, 768);
    widget.map()->setStyleUrl(styleUrl);
    widget.show();

    // Mouse sürükle = pan, scroll = zoom (GLWidget kendi halleder)
    return app.exec();
}
