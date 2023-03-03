#include "Puissance.h"
#include <math.h>
#include <iostream>
using namespace std;

Puissance::Puissance(Expression *e1, Expression *e2) : Operateur(e1,e2)
{
    //ctor
}

Puissance::~Puissance()
{
    //dtor
}

float Puissance::calculer() {
  return pow(_operandeGauche->calculer(),_operandeDroit->calculer());
}

void Puissance::afficher(){
    cout << "(" ;
    _operandeGauche->afficher();
    cout << "^";
    _operandeDroit->afficher();
    cout << ")";
}

void Puissance::afficherNPI() {
    _operandeGauche->afficherNPI();
    cout << " ";
    _operandeDroit->afficherNPI();
    cout << " ^ ";
}
