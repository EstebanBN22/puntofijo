#include "punto_fijo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    punto_fijo w;
    w.show();

    return a.exec();
}
