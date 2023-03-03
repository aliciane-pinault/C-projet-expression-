#ifndef OPERATEUR_H
#define OPERATEUR_H

#include "Expression.h"


class Operateur : public Expression
{
    public:
        Operateur(Expression*opd, Expression*opg);
        virtual ~Operateur();

    protected:
        Expression* _operandeGauche;
        Expression* _operandeDroit;


    private:
};

#endif // OPERATEUR_H
