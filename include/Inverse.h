#ifndef INVERSE_H
#define INVERSE_H

#include "Operateur_Unaire.h"

class Inverse : public OperateurUnaire {
public:
    explicit Inverse(std::shared_ptr<Expression> expression);
    double evaluer() const;
    char symbole() const;
};

#endif
