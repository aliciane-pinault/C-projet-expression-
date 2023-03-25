#ifndef GRAPH2D_H
#define GRAPH2D_H

#include <QWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

#include "include/Expression.h"
#include "include/Constante.h"

class Graph2D : public QChartView {

private :
    static constexpr float min_pas = 0.001;
    QLineSeries series;
    QChart chart;
    Expression * expression;
    Constante * variable;
    float min_x = -5.0;
    float max_x =  5.0;
    float pas = 0.1;
public:
    explicit Graph2D(QWidget *parent = nullptr, Expression * expression = nullptr, Constante * variable = nullptr);
    void update();
    void setExpression(Expression * expression);
    void setInterval(float min, float max);
    void setPas(float pas);
};

#endif // GRAPH2D_H
