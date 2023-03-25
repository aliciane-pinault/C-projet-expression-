#ifndef SOUSTRACTION_H
#define SOUSTRACTION_H

#include "Operateur.h"


class Soustraction : public Operateur
{
    public:
        Soustraction(Expression *e1, Expression *e2);
        virtual ~Soustraction();


        float calculer()override;
        void afficher()override;
        void afficherNPI()override;


    protected:

    private:
};

#endif // SOUSTRACTION_H
