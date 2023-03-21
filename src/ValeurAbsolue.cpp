#include <cmath>
#include "ValeurAbsolue.h"

Expression* ValeurAbsolue::calculer(Expression const& expr) {
    double valeur = expr.valeur();
    return new ValeurAbsolueExpression(valeur);
}

ValeurAbsolueExpression::ValeurAbsolueExpression(double valeur) : Expression(0), _valeur(valeur) {}

double ValeurAbsolueExpression::calculer() const {
    return std::abs(_valeur);
}

void ValeurAbsolueExpression::afficher() const {
    std::cout << "|";
    std::cout << _valeur;
    std::cout << "|";
}

void ValeurAbsolueExpression::afficherNPI() const {
    std::cout << _valeur << " ABS";
}
