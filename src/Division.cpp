#include "Division.h"
#include <iostream>

DivisionExpression::DivisionExpression(double quotient) : Expression(0), _quotient(quotient) {}

double DivisionExpression::calculer() const {
    return _quotient;
}

void DivisionExpression::afficher() const {
    std::cout << "(" << _quotient << ")";
}

void DivisionExpression::afficherNPI() const {
    std::cout << _quotient;
}

Expression* Division::calculer(Expression const& expr1, Expression const& expr2) {
    double val1 = expr1.valeur();
    double val2 = expr2.valeur();

    if (val2 == 0) {
        std::cerr << "Erreur: Division par zéro." << std::endl;
        return nullptr;
    }

    double result = val1 / val2;
    return new DivisionExpression(result);
}

