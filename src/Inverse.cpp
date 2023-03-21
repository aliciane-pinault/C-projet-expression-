// src/inverse.cpp

#include "inverse.h"

Expression* Inverse::calculer(Expression const& expr) {
    double base = expr.valeur();
    return new InverseExpression(base);
}

InverseExpression::InverseExpression(double base) : Expression(0), _base(base) {}

double InverseExpression::calculer() const {
    return 1 / _base;
}

void InverseExpression::afficher() const {
    std::cout << "(1/" << _base << ")";
}

void InverseExpression::afficherNPI() const {
    std::cout << _base << " inv";
}



