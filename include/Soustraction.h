#ifndef SOUSTRACTION_H
#define SOUSTRACTION_H

#include "Operateur_Binaire.h"

class Soustraction : public OperateurBinaire {
public:
    Soustraction(std::shared_ptr<Expression> gauche, std::shared_ptr<Expression> droite);
    double evaluer() const override;

protected:
    char symbole() const override;
};

#endif
