#include "mainwindow.h"

QString version = "0.0.2";

#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setOrganizationDomain("slshptt.vercel.app");
    app.setApplicationName("coffee-player");
    app.setApplicationVersion(version);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "coffee-player_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            app.installTranslator(&translator);
            break;
        }
    }

    MainWindow window;
    window.setMinimumHeight(350);
    window.setMinimumWidth(500);
    window.show();

    return app.exec();
}
