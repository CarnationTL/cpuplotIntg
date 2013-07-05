#include "maincpuplot.h"
#include "ui_maincpuplot.h"
#include <QLabel>
#include <QVBoxLayout>

MainCpuplot::MainCpuplot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainCpuplot)
{
    ui->setupUi(this);


    QVBoxLayout *pl = new QVBoxLayout(ui->centralWidget);


    QWidget *vBox = new QWidget(ui->centralWidget);
    pl->addWidget (vBox);

    vBox->setWindowTitle( "Cpu Plot" );

    CpuPlot *plot = new CpuPlot( vBox );
    plot->setTitle( "History" );

    const int margin = 5;
    plot->setContentsMargins( margin, margin, margin, margin );

    //QString info( "Press the legend to en/disable a curve" );

   // QLabel *label = new QLabel( info, vBox );

    QVBoxLayout *layout = new QVBoxLayout( vBox );
    layout->addWidget( plot );
    //layout->addWidget( label );

    vBox->resize( 600, 400 );
    ui->centralWidget->resize (400, 600);
    //vBox->show();
}

MainCpuplot::~MainCpuplot()
{
    //TODO release resource
    delete ui;
}

