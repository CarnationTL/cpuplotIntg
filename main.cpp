#include "maincpuplot.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainCpuplot w;
    w.show();
    
    QWidget vBox(&w);
    vBox.setWindowTitle( "Cpu Plot" );

    CpuPlot *plot = new CpuPlot( &vBox );
    plot->setTitle( "History" );

    const int margin = 5;
    plot->setContentsMargins( margin, margin, margin, margin );

    QString info( "Press the legend to en/disable a curve" );

    QLabel *label = new QLabel( info, &vBox );

    QVBoxLayout *layout = new QVBoxLayout( &vBox );
    layout->addWidget( plot );
    layout->addWidget( label );

    vBox.resize( 600, 400 );
    w.resize (600, 400);
    vBox.show();

    return a.exec();
}
