#pragma once
#include "OperateurUnaire.h"

class RacineCarree : public OperateurUnaire {
public:
    Expression* calculer(Expression const& expr) override;
};

class RacineCarreeExpression : public Expression {
public:
    RacineCarreeExpression(double valeur);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;

private:
    double _valeur;
};
