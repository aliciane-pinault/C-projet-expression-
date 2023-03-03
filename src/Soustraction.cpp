#include "Soustraction.h"
#include <iostream>
using namespace std;


Soustraction::Soustraction(Expression *e1, Expression *e2) : Operateur(e1,e2)
{

}

Soustraction::~Soustraction()
{
    //dtor
}

float Soustraction::calculer() {
  return _operandeGauche->calculer() - _operandeDroit->calculer();
}

void Soustraction::Afficher(){
    cout << "(" ;
    _operandeGauche->afficher();
    cout << "-";
    _operandeDroit->afficher();
    cout << ")";
}

void Soustraction::afficherNPI() {
  /*_operandeGauche->afficherNPI();
    cout << " ";
    _operandeDroit->afficherNPI();
    cout << "-";*/
}
