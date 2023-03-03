#ifndef RACINECAR_H
#define RACINECAR_H

#include <OperateurUnaire.h>


class RacineCar : public OperateurUnaire
{
    public:
        RacineCar(Expression*opu);
        virtual ~RacineCar();

    protected:

    private:
};

#endif // RACINECAR_H
