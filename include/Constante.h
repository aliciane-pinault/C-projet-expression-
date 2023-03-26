#ifndef CONSTANTE_H
#define CONSTANTE_H

#include "Expression.h"

class Constante : public Expression {
public:
    Constante(double valeur);
    double evaluer() const override;
    void afficher(std::ostream &os) const override;
    void afficherPolonaiseInverse(std::ostream &os) const override;

private:
    double valeur_;
};

#endif
