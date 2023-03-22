#pragma once
#include "OperateurBinaire.h"
#include "Expression.h"

class DivisionExpression : public Expression {
public:
    DivisionExpression(double quotient);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;

private:
    double _quotient;
};

class Division : public OperateurBinaire {
public:
    Expression* calculer(Expression const& expr1, Expression const& expr2) override;
};

