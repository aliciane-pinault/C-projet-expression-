#include "graph2d.h"

Graph2D::Graph2D(QWidget *parent, Expression * expression, Constante * variable)
    : QChartView(parent), expression(expression), variable(variable){
    setUpdatesEnabled(true);
    chart.legend()->hide();
    chart.setTitle("Graph 2d");
    chart.addSeries(&series);
    chart.createDefaultAxes();
    setRenderHint(QPainter::Antialiasing);
    setChart(&chart);
    update();

}


void Graph2D::update(){
    //chart.removeAllSeries();
    series.clear();
    if(pas <= min_pas || min_x >= max_x || expression == nullptr || variable == nullptr)return;
    float min_y = 0.0;
    float max_y =  0.0;
    for(float x = min_x; x <= max_x; x += pas){
        variable->setValue(x);
        float y = expression->calculer();
        series << QPointF(x, y);
        min_y = y < min_y?y:min_y;
        max_y = y > max_y?y:max_y;
    }
    //chart.addSeries(&series);
    chart.removeSeries(&series);
    chart.addSeries(&series);
    chart.adjustSize();
    chart.axes().at(0)->setRange(min_x,max_x);
    chart.axes().at(1)->setRange(min_y,max_y);
    QChartView::update();
}

void Graph2D::setExpression(Expression * expression){
    Graph2D::expression = expression;
    update();
}


void Graph2D::setInterval(float min, float max){
    if(min >= max)return;
    min_x = min;
    max_x = max;
    update();
}


void Graph2D::setPas(float pas){
    if(pas < min_pas)return;
    Graph2D::pas = pas;
    update();
}
