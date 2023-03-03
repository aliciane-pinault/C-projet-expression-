#ifndef OPPOSE_H
#define OPPOSE_H

#include <OperateurUnaire.h>


class Oppose : public OperateurUnaire
{
    public:
        Oppose(Expression*opu);
        virtual ~Oppose();

    protected:

    private:
};

#endif // OPPOSE_H
