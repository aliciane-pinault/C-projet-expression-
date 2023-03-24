#include "Addition.h"

Expression* Addition::calculer(Expression const& expr1, Expression const& expr2) {
    double result = expr1.valeur() + expr2.valeur();
    return new AdditionExpression(result);
}


AdditionExpression::AdditionExpression(double sum) : Expression(0), _sum(sum) {}

double AdditionExpression::calculer() const {
    return _sum;
}

void AdditionExpression::afficher() const {
    std::cout << "(" << _sum << ")";
}

void AdditionExpression::afficherNPI() const {
    std::cout << _sum;
}

