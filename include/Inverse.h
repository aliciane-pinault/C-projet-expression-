#pragma once
#include "OperateurUnaire.h"

class Inverse : public OperateurUnaire {
public:
    Expression* calculer(Expression const& expr) override;
};

class InverseExpression : public Expression {
public:
    InverseExpression(double base);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;

private:
    double _base;
};





