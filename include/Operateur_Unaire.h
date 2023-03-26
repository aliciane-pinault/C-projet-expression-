#ifndef OPERATEUR_UNAIRE_H
#define OPERATEUR_UNAIRE_H

#include <iostream>
#include <memory>
#include "Expression.h"

class OperateurUnaire : public Expression {
public:
    explicit OperateurUnaire(std::shared_ptr<Expression> expression);
    virtual void afficher(std::ostream &os) const;
    virtual void afficherPolonaiseInverse(std::ostream &os) const;

protected:
    virtual char symbole() const = 0;
    std::shared_ptr<Expression> expression_;
};

#endif
