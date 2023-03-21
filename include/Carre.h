#pragma once
#include "OperateurUnaire.h"

class Carre : public OperateurUnaire {
public:
    Expression* calculer(Expression const& expr) override;
};

class CarreExpression : public Expression {
public:
    CarreExpression(double base);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;

private:
    double _base;
};








