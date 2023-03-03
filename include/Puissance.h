#ifndef PUISSANCE_H
#define PUISSANCE_H

#include <Operateur.h>


class Puissance : public Operateur
{
    public:
        Puissance(Expression *e1, Expression *e2);
        virtual ~Puissance();

        void afficher() override;
        float calculer() override;
        void afficherNPI() override;

    protected:

    private:
};

#endif // PUISSANCE_H
