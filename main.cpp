#include "shop.h"
#include "database.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Shop w;
    w.show();
    Database db;
    db.show();
    QObject::connect(&w, SIGNAL(send_to_database(QString, int )), &db, SLOT(slotToDatabase(QString, int )));
    return a.exec();
}
