#include "authorization.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Authorization authorization;
    authorization.show();
    return a.exec();
}
