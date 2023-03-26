#ifndef DIVISION_H
#define DIVISION_H

#include "Operateur_Binaire.h"

class Division : public OperateurBinaire {
public:
    Division(std::shared_ptr<Expression> gauche, std::shared_ptr<Expression> droite);
    double evaluer() const override;

protected:
    char symbole() const override;
};

#endif
