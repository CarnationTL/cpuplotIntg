#include "maincpuplot.h"
#include "ui_maincpuplot.h"

MainCpuplot::MainCpuplot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainCpuplot)
{
    ui->setupUi(this);
}

MainCpuplot::~MainCpuplot()
{
    delete ui;
}

