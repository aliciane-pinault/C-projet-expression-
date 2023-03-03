#ifndef RACINECAR_H
#define RACINECAR_H

#include <OperateurUnaire.h>


class RacineCar : public OperateurUnaire
{
    public:
        RacineCar(Expression*opu);
        virtual ~RacineCar();

        void afficher() override;
        float calculer() override;
        void afficherNPI() override;

    protected:

    private:
};

#endif // RACINECAR_H
