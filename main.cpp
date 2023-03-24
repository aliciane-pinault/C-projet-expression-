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

    Constante c1(5), c2(2), c3(4), c4(-3), c5(20) ;

    // Créer une instance de Variable
    Variable var;
    var.set_variable('x',12);
    //var.afficher();

    // Créer une copie de l'instance de Variable
    Variable var2 = var.copy();
    //var2.afficher();

    // Créer une instance de Variable
    Variable var3;
    var3.set_variable('y',12);
    var3.afficher();

    Constante c_var(var.get_value());
    Constante c_var2(var2.get_value());
    Constante c_var3(var3.get_value());

    Addition addV(&c_var, &c_var3);
    addV.afficher();


    cout << endl;
    return 0;
}
