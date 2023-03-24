#include "Soustraction.h"
#include <iostream>

SoustractionExpression::SoustractionExpression(double difference) : Expression(0), _difference(difference) {}

double SoustractionExpression::calculer() const {
    return _difference;
}

void SoustractionExpression::afficher() const {
    std::cout << "(" << _difference << ")";
}

void SoustractionExpression::afficherNPI() const {
    std::cout << _difference;
}

Expression* Soustraction::calculer(Expression const& expr1, Expression const& expr2) {
    double val1 = expr1.valeur();
    double val2 = expr2.valeur();
    double result = val1 - val2;
    return new SoustractionExpression(result);
}

