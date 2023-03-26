#ifndef CARRE_H
#define CARRE_H

#include "Operateur_Unaire.h"

class Carre : public OperateurUnaire {
public:
    explicit Carre(std::shared_ptr<Expression> expression);
    double evaluer() const;
    char symbole() const;
};

#endif
