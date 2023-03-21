#include <cmath>
#include "Puissance.h"

Expression* Puissance::calculer(Expression const& expr1, Expression const& expr2) {
    double base = expr1.valeur();
    double exposant = expr2.valeur();
    return new PuissanceExpression(base, exposant);
}

PuissanceExpression::PuissanceExpression(double base, double exposant) : Expression(0), _base(base), _exposant(exposant) {}

double PuissanceExpression::calculer() const {
    return std::pow(_base, _exposant);
}

void PuissanceExpression::afficher() const {
    std::cout << "(" << _base << "^" << _exposant << ")";
}

void PuissanceExpression::afficherNPI() const {
    std::cout << _base << " " << _exposant << " ^";
}
