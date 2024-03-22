#include "mainwindow.h"

#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    if (translator.load(QLocale(), QLatin1String("FirstTest"), QLatin1String("_"), QLatin1String(":/i18n"))) {
        QCoreApplication::installTranslator(&translator);
    }

    MainWindow w;
    w.show();
    return a.exec();
}
