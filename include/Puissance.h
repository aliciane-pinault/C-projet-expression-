#ifndef PUISSANCE_H
#define PUISSANCE_H

#include <Operateur.h>


class Puissance : public Operateur
{
    public:
        Puissance(Expression *e1, Expression *e2);
        virtual ~Puissance();

    protected:

    private:
};

#endif // PUISSANCE_H
