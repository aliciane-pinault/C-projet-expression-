#include <cmath>
#include "LogNep.h"

Expression* LogNep::calculer(Expression const& expr) {
    double valeur = expr.valeur();
    return new LogNepExpression(valeur);
}

LogNepExpression::LogNepExpression(double valeur) : Expression(0), _valeur(valeur) {}

double LogNepExpression::calculer() const {
    return std::log(_valeur);
}

void LogNepExpression::afficher() const {
    std::cout << "ln(";
    std::cout << _valeur;
    std::cout << ")";
}

void LogNepExpression::afficherNPI() const {
    std::cout << _valeur << " ln";
}
