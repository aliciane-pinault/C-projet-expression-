// src/oppose.cpp

#include "oppose.h"

Expression* Oppose::calculer(Expression const& expr) {
    double base = expr.valeur();
    return new OpposeExpression(base);
}

OpposeExpression::OpposeExpression(double base) : Expression(0), _base(base) {}

double OpposeExpression::calculer() const {
    return -_base;
}

void OpposeExpression::afficher() const {
    std::cout << "(-" << _base << ")";
}

void OpposeExpression::afficherNPI() const {
    std::cout << _base << " opp";
}

