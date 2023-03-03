#ifndef CARRE_H
#define CARRE_H

#include <OperateurUnaire.h>


class Carre : public OperateurUnaire
{
    public:
        Carre(Expression*opu);
        virtual ~Carre();

        void afficher() override;
        float calculer() override;
        void afficherNPI() override;

    protected:

    private:
};

#endif // CARRE_H
