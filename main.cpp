#include <iostream>
#include "Multiplication.h"
#include "Addition.h"
#include "Constante.h"
#include "Division.h"
#include "Expression.h"
#include "Operateur.h"
#include "Soustraction.h"
#include "OperateurUnaire.h"
#include "Puissance.h"
#include "Carre.h"
#include "Inverse.h"
#include "Oppose.h"
#include "Lognep.h"
#include "RacineCar.h"
#include "Valeurabs.h"



using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << endl;

    /*//(5/2 + 4) * (-3 - 20)
    //5 2 / 4 + -3 20 - *
    Constante c1(5), c2(2), c3(4), c4(-3), c5(20) ;
    Division div(&c1, &c2);
    Addition add(&div, &c3);
    Soustraction sou(&c4, &c5);
    Multiplication mul(&add, &sou);

    cout << "affichage normale :"<<endl;
    //add.afficher();
    mul.afficher();
    cout << endl;
    cout << "resultat normale : " << mul.calculer();

    cout << endl << endl;

    cout << "affichage NPI :"<<endl;
    //add.afficherNPI();
    mul.afficherNPI();
     cout << endl;
    cout << "resultat NPI : " << mul.calculer();*/

    Constante c1(5), c2(3);
    /*//TEST PUISSANCE
    Puissance pui(&c1, &c2);
    cout << "affichage normale :"<<endl;
    pui.afficher();
    cout << "resultat : " << pui.calculer()<<endl;

    cout << "affichage NPI :"<<endl;
    pui.afficherNPI();*/

    /*//TEST carre
    Carre car(&c1);
    cout << "affichage normale :"<<endl;
    car.afficher();
    cout << "resultat : " << car.calculer()<<endl;

    cout << "affichage NPI :"<<endl;
    car.afficherNPI();*/

    /*//TEST inverse
    Inverse inv(&c1);
    cout << "affichage normale :"<<endl;
    inv.afficher();
    cout << "resultat : " << inv.calculer()<<endl;

    cout << "affichage NPI :"<<endl;
    inv.afficherNPI();*/

    /*//TEST oppose
    Oppose opp(&c1);
    cout << "affichage normale :"<<endl;
    opp.afficher();
    cout << "resultat : " << opp.calculer()<<endl;

    cout << "affichage NPI :"<<endl;
    opp.afficherNPI();*/

    /*//TEST log neperien
    Lognep log(&c1);
    cout << "affichage normale :"<<endl;
    log.afficher();
    cout << "resultat : " << log.calculer()<<endl;

    cout << "affichage NPI :"<<endl;
    log.afficherNPI();*/

    /*//TEST  racine carre
    RacineCar rac(&c1);
    cout << "affichage normale :"<<endl;
    rac.afficher();
    cout << "resultat : " << rac.calculer()<<endl;

    cout << "affichage NPI :"<<endl;
    rac.afficherNPI();*/

    //TEST  valeur absolue
    Valeurabs val(&c1);
    cout << "affichage normale :"<<endl;
    val.afficher();
    cout << "resultat : " << val.calculer()<<endl;

    cout << "affichage NPI :"<<endl;
    val.afficherNPI();




    cout << endl;
    return 0;
}
