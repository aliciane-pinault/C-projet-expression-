#include "ResultExpression.h"

ResultExpression::ResultExpression(double valeur) : Expression(valeur) {}

double ResultExpression::calculer() const {
    return _valeur;
}

void ResultExpression::afficher() const {
    std::cout << _valeur;
}

void ResultExpression::afficherNPI() const {
    std::cout << _valeur;
}
