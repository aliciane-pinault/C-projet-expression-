#pragma once
#include "OperateurBinaire.h"

class Addition : public OperateurBinaire {
public:
    Expression* calculer(Expression const& expr1, Expression const& expr2) override;
};

class AdditionExpression : public Expression {
public:
    AdditionExpression(double sum);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;

private:
    double _sum;
};
