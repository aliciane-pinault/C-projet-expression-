#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "Operateur_Binaire.h"

class Multiplication : public OperateurBinaire {
public:
    Multiplication(std::shared_ptr<Expression> gauche, std::shared_ptr<Expression> droite);
    double evaluer() const override;

protected:
    char symbole() const override;
};

#endif
