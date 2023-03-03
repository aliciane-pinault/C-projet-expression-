#ifndef CARRE_H
#define CARRE_H

#include <OperateurUnaire.h>


class Carre : public OperateurUnaire
{
    public:
        Carre(Expression*opu);
        virtual ~Carre();

    protected:

    private:
};

#endif // CARRE_H
