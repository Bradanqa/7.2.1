#include <QCoreApplication>
#include <QSqlDatabase>
#include <QtNetwork>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QNetworkAccessManager am;
    QSqlDatabase db;

    return a.exec();
}
