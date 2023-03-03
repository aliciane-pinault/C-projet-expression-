#include <iostream>
#include "Multiplication.h"
#include "Addition.h"
#include "Constante.h"
#include "Division.h"
#include "Expression.h"
#include "Operateur.h"
#include "Soustraction.h"


using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << endl;

    //(5/2 + 4) * (-3 - 20)
    //5 2 / 4 + -3 20 - *
    Constante c1(5), c2(2), c3(4), c4(-3), c5(20) ;
    Division div(&c1, &c2);
    Addition add(&div, &c3);
    Soustraction sou(&c4, &c5);
    Multiplication mul(&add, &sou);

    cout << "affichage normale :"<<endl;
    //add.afficher();
    mul.afficher();

    cout << endl << endl;

    cout << "affichage NPI :"<<endl;
    //add.afficherNPI();
    mul.afficherNPI();



    cout << endl;
    return 0;
}
