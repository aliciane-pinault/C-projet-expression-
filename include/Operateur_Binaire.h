#ifndef OPERATEUR_BINAIRE_H
#define OPERATEUR_BINAIRE_H

#include "Expression.h"

class OperateurBinaire : public Expression {
public:
    OperateurBinaire(std::shared_ptr<Expression> gauche, std::shared_ptr<Expression> droite);
    double evaluer() const override = 0;
    void afficher(std::ostream &os) const override;
    void afficherPolonaiseInverse(std::ostream &os) const override;

protected:
    virtual char symbole() const = 0;
    std::shared_ptr<Expression> gauche_;
    std::shared_ptr<Expression> droite_;
};

#endif
