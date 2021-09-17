#include "QTWPSApplication.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTWPSApplication w;
    w.show();
    return a.exec();
}
