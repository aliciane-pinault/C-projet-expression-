#ifndef INVERSE_H
#define INVERSE_H

#include <OperateurUnaire.h>


class Inverse : public OperateurUnaire
{
    public:
        Inverse(Expression*opu);
        virtual ~Inverse();

        void afficher() override;
        float calculer() override;
        void afficherNPI() override;

    protected:

    private:
};

#endif // INVERSE_H
