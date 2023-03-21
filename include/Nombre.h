#pragma once
#include "Expression.h"

class Nombre : public Expression {
public:
    Nombre(double valeur);
    double calculer() const override;
    void afficher() const override;
    void afficherNPI() const override;
};
