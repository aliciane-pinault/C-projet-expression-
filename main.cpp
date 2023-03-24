#include <iostream>
#include "Multiplication.h"
#include "Addition.h"
#include "Constante.h"
#include "Division.h"
#include "Expression.h"
#include "Operateur.h"
#include "Soustraction.h"
#include "Variable.h"


using namespace std;

int main()
{
    Variable* variables[100];
    int nb_variables = 0;

    // Créer une instance de Variable
    Variable var;
    var.set_variable('x',12);

    // Créer une instance de Variable
    Variable var3;
    var3.set_variable('y',12);

    // Ajouter les variables à la liste
    variables[nb_variables] = &var;
    nb_variables++;
    variables[nb_variables] = &var3;
    nb_variables++;

    // Ajouter une nouvelle variable
    Variable::creerVariable(variables, nb_variables);

    // Afficher la liste des variables mise à jour
    Variable::afficherVariables(variables, nb_variables);

    return 0;
}
