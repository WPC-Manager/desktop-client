#include "wpcmanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WPCManager w;
    w.show();
    return a.exec();
}
