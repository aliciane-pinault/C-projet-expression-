#include "mainwindow.h"

#include <memory>

#include <QApplication>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

#include "include/Constante.h"
#include "include/Addition.h"
#include "include/Soustraction.h"
#include "include/Multiplication.h"
#include "include/Division.h"

QT_USE_NAMESPACE

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    QLineSeries series;

    Constante c1(5), c2(2), c3(4), c4(-3), c5(20) ;
    Division div(&c1, &c2);
    Addition add(&div, &c3);
    Soustraction sou(&c4, &c5);
    Multiplication mul(&add, &sou);

    for(float x = -10.0;x < 10.0;x+=0.001){
        c1.setValue(x);
        c5.setValue(x);
        series << QPointF(x,mul.calculer());
    }

    QChart chart;
    chart.legend()->hide();
    chart.addSeries(&series);
    chart.createDefaultAxes();
    chart.setTitle("Graph 2d");

    QChartView chartView(&chart);
    chartView.setRenderHint(QPainter::Antialiasing);

    MainWindow w;
    w.setCentralWidget(&chartView);
    w.resize(400,300);
    w.show();
    return a.exec();
}
