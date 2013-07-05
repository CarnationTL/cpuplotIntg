#ifndef MAINCPUPLOT_H
#define MAINCPUPLOT_H

#include <QMainWindow>
#include <cpuplot/cpuplot.h>
#include <cpuplot/cpustat.h>
#include <cpuplot/cpupiemarker.h>
#include <QLabel>
#include <QVBoxLayout>
namespace Ui {
class MainCpuplot;
}

class MainCpuplot : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainCpuplot(QWidget *parent = 0);
    ~MainCpuplot();
    
private:
    Ui::MainCpuplot *ui;
};

#endif // MAINCPUPLOT_H
