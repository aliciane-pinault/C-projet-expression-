#pragma once
#include "OperateurUnaire.h"

class Oppose : public OperateurUnaire {
public:
    Expression* calculer(Expression const& expr) override;
};

class OpposeExpression : public Expression {
public:
    OpposeExpression(double base);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;

private:
    double _base;
};




