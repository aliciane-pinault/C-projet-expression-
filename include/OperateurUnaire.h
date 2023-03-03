#ifndef OPUNIT_H
#define OPUNIT_H

#include <Expression.h>


class OperateurUnaire : public Expression
{
    public:
        OperateurUnaire(Expression*opu);
        virtual ~OperateurUnaire();

    protected:
        Expression* _opunit;

    private:
};

#endif // OPUNIT_H
