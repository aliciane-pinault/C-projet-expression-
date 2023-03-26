#ifndef LOG_NEP_H
#define LOG_NEP_H

#include "Operateur_Unaire.h"
#include <cmath>

class LogNep : public OperateurUnaire {
public:
    explicit LogNep(std::shared_ptr<Expression> expression);
    double evaluer() const;
    char symbole() const;
};

#endif
