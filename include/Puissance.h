#pragma once
#include "OperateurBinaire.h"

class Puissance : public OperateurBinaire {
public:
    Expression* calculer(Expression const& expr1, Expression const& expr2) override;
};

class PuissanceExpression : public Expression {
public:
    PuissanceExpression(double base, double exposant);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;

private:
    double _base;
    double _exposant;
};
