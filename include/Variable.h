#ifndef VARIABLE_H
#define VARIABLE_H

#include <iostream>

#include <Expression.h>


class Variable : public Expression
{
    public:
        virtual ~Variable();
        Variable(char name='x',float value=1);
        void set_variable(char name, float value);
        static void creerVariable(Variable* variables[], int& nb_variables);
        static void afficherVariables(Variable* variables[], int nb_variables);
        Variable copy() const;
        float& get_value();
        char& get_name();
        void afficher() override;
        void afficherNPI() override;
        float calculer() override;

    protected:
        char _name;
        float _value;

    private:
};

#endif // VARIABLE_H
