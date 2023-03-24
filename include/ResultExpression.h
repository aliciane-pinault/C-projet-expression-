#pragma once
#include "Expression.h"

class ResultExpression : public Expression {
public:
    ResultExpression(double valeur);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;
};
