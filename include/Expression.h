// include/expression.h

#pragma once
#include <iostream>

class Expression {
public:
    virtual ~Expression() = default;
    virtual double calculer() const = 0;
    virtual void afficher() const = 0;
    virtual void afficherNPI() const = 0;
    double valeur() const;

protected:
    Expression(double valeur);
    double _valeur;
};


