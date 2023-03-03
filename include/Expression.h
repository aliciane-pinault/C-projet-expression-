#ifndef EXPRESSION_H
#define EXPRESSION_H


class Expression
{
    public:
        Expression();
        virtual ~Expression();

        virtual float calculer() =0;
        virtual void afficher() =0;


    protected:


    private:
};

#endif // EXPRESSION_H
