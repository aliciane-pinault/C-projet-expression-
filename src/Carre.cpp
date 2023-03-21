#include <cmath>
#include "Carre.h"

Expression* Carre::calculer(Expression const& expr) {
    double base = expr.valeur();
    return new CarreExpression(base);
}

CarreExpression::CarreExpression(double base) : Expression(0), _base(base) {}

double CarreExpression::calculer() const {
    return _base * _base;
}

void CarreExpression::afficher() const {
    std::cout << "(" << _base << "^2)";
}

void CarreExpression::afficherNPI() const {
    std::cout << _base << " 2 ^";
}


