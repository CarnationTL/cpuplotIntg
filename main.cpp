#include "maincpuplot.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainCpuplot w;
    w.show();
    


    return a.exec();
}
