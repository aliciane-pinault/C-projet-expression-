#ifndef OPPOSE_H
#define OPPOSE_H

#include "Operateur_Unaire.h"

class Oppose : public OperateurUnaire {
public:
    explicit Oppose(std::shared_ptr<Expression> expression);
    double evaluer() const;
    char symbole() const;
};

#endif
