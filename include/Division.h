#ifndef DIVISION_H
#define DIVISION_H

#include <Operateur.h>


class Division : public Operateur
{
    public:

        Division(Expression *e1, Expression *e2);
        virtual ~Division();

        float calculer();
        void afficher();

    protected:

    private:
};

#endif // DIVISION_H
