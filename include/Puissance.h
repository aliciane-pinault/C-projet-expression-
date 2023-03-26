#ifndef PUISSANCE_H
#define PUISSANCE_H

#include "Operateur_Binaire.h"
#include <cmath>

class Puissance : public OperateurBinaire {
public:
    Puissance(std::shared_ptr<Expression> gauche, std::shared_ptr<Expression> droite);
    double evaluer() const;
    char symbole() const;
};

#endif
