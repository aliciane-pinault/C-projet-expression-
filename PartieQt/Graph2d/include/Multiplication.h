#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "Operateur.h"


class Multiplication : public Operateur
{
    public:

        Multiplication(Expression *e1, Expression *e2);
        virtual ~Multiplication();

        float calculer()override;
        void afficher()override;
        void afficherNPI()override;

    protected:

    private:
};

#endif // MULTIPLICATION_H
