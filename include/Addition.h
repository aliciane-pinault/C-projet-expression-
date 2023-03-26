#ifndef ADDITION_H
#define ADDITION_H

#include "Operateur_Binaire.h"

class Addition : public OperateurBinaire {
public:
    Addition(std::shared_ptr<Expression> gauche, std::shared_ptr<Expression> droite);
    double evaluer() const override;

protected:
    char symbole() const override;
};

#endif
