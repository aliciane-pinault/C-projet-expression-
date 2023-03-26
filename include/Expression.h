#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <iostream>
#include <memory>

class Expression {
public:
    virtual ~Expression() = default;
    virtual double evaluer() const = 0;
    virtual void afficher(std::ostream &os) const = 0;
    virtual void afficherPolonaiseInverse(std::ostream &os) const = 0;
};

#endif
