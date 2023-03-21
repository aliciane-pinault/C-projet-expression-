#pragma once
#include "OperateurUnaire.h"

class ValeurAbsolue : public OperateurUnaire {
public:
    Expression* calculer(Expression const& expr) override;
};

class ValeurAbsolueExpression : public Expression {
public:
    ValeurAbsolueExpression(double valeur);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;

private:
    double _valeur;
};
