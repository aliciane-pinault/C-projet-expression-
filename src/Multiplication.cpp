#include "Multiplication.h"
#include <iostream>

MultiplicationExpression::MultiplicationExpression(double produit) : Expression(0), _produit(produit) {}

double MultiplicationExpression::calculer() const {
    return _produit;
}

void MultiplicationExpression::afficher() const {
    std::cout << "(" << _produit << ")";
}

void MultiplicationExpression::afficherNPI() const {
    std::cout << _produit;
}

Expression* Multiplication::calculer(Expression const& expr1, Expression const& expr2) {
    double val1 = expr1.valeur();
    double val2 = expr2.valeur();
    double result = val1 * val2;
    return new MultiplicationExpression(result);
}

