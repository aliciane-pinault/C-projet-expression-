#pragma once
#include "OperateurBinaire.h"
#include "Expression.h"

class MultiplicationExpression : public Expression {
public:
    MultiplicationExpression(double produit);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;

private:
    double _produit;
};

class Multiplication : public OperateurBinaire {
public:
    Expression* calculer(Expression const& expr1, Expression const& expr2) override;
};
