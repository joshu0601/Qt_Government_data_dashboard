#include "dashboard.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dashboard w;
    w.show();
    return a.exec();
}
