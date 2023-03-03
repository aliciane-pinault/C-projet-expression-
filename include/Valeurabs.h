#ifndef VALEURABS_H
#define VALEURABS_H

#include <OperateurUnaire.h>


class Valeurabs : public OperateurUnaire
{
    public:
        Valeurabs(Expression*opu);
        virtual ~Valeurabs();

    protected:

    private:
};

#endif // VALEURABS_H
