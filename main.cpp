#include "mainwindow.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QtNetwork>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QNetworkAccessManager am;
    QSqlDatabase db;

    return a.exec();
}
