#ifndef LOGNEP_H
#define LOGNEP_H

#include <OperateurUnaire.h>


class Lognep : public OperateurUnaire
{
    public:
        Lognep(Expression*opu);
        virtual ~Lognep();

        void afficher() override;
        float calculer() override;
        void afficherNPI() override;

    protected:

    private:
};

#endif // LOGNEP_H
