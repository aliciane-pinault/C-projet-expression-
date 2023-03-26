#ifndef RACINE_CARREE_H
#define RACINE_CARREE_H

#include "Operateur_Unaire.h"
#include <cmath>

class RacineCarree : public OperateurUnaire {
public:
    explicit RacineCarree(std::shared_ptr<Expression> expression);
    double evaluer() const;
    char symbole() const;
};

#endif
