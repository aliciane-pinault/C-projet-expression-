#pragma once
#include "OperateurBinaire.h"
#include "Expression.h"

class SoustractionExpression : public Expression {
public:
    SoustractionExpression(double difference);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;

private:
    double _difference;
};

class Soustraction : public OperateurBinaire {
public:
    Expression* calculer(Expression const& expr1, Expression const& expr2) override;
};



