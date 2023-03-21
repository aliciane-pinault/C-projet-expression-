#pragma once
#include "OperateurUnaire.h"

class LogNep : public OperateurUnaire {
public:
    Expression* calculer(Expression const& expr) override;
};

class LogNepExpression : public Expression {
public:
    LogNepExpression(double valeur);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;

private:
    double _valeur;
};
