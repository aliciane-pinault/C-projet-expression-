#include <cmath>
#include "RacineCarree.h"

Expression* RacineCarree::calculer(Expression const& expr) {
    double valeur = expr.valeur();
    return new RacineCarreeExpression(valeur);
}

RacineCarreeExpression::RacineCarreeExpression(double valeur) : Expression(0), _valeur(valeur) {}

double RacineCarreeExpression::calculer() const {
    return std::sqrt(_valeur);
}

void RacineCarreeExpression::afficher() const {
    std::cout << "√(";
    std::cout << _valeur;
    std::cout << ")";
}

void RacineCarreeExpression::afficherNPI() const {
    std::cout << _valeur << " √";
}
