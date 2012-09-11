#include <QApplication>
#include "l2_base.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    l2_base w;
    w.show();
    
    return a.exec();
}
