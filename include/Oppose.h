#ifndef OPPOSE_H
#define OPPOSE_H

#include <OperateurUnaire.h>


class Oppose : public OperateurUnaire
{
    public:
        Oppose(Expression*opu);
        virtual ~Oppose();

        void afficher() override;
        float calculer() override;
        void afficherNPI() override;

    protected:

    private:
};

#endif // OPPOSE_H
