#ifndef ADDITION_H
#define ADDITION_H

#include "Operateur.h"


class Addition : public Operateur
{
    public:
        Addition(Expression *e1, Expression *e2);
        virtual ~Addition();

        void afficher() override;
        float calculer() override;
        void afficherNPI() override;



    protected:

    private:
};

#endif // ADDITION_H
