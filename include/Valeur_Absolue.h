#ifndef VALEUR_ABSOLUE_H
#define VALEUR_ABSOLUE_H

#include "Operateur_Unaire.h"
#include <cmath>

class ValeurAbsolue : public OperateurUnaire {
public:
    explicit ValeurAbsolue(std::shared_ptr<Expression> expression);
    double evaluer() const;
    char symbole() const;
};

#endif
