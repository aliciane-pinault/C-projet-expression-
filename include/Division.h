#ifndef DIVISION_H
#define DIVISION_H

#include <Operateur.h>


class Division : public Operateur
{
    public:

        Division(Expression *e1, Expression *e2);
        virtual ~Division();

        float calculer() override;
        void afficher()override;
        void afficherNPI()override;

    protected:

    private:
};

#endif // DIVISION_H
