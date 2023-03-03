#ifndef CONSTANTE_H
#define CONSTANTE_H

#include <Expression.h>


class Constante : public Expression
{
    public:
        Constante(float v);
        virtual ~Constante();

        float calculer() override;
        void afficher() override;
        void afficherNPI() override;


    protected:
        float _constante;

    private:
};

#endif // CONSTANTE_H
