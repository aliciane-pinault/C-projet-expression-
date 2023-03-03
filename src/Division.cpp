#include "Division.h"
#include <iostream>
using namespace std;


Division::Division(Expression *e1, Expression *e2) : Operateur(e1,e2)
{

}

Division::~Division()
{
    //dtor
}

float Division::calculer() {
    return _operandeGauche->calculer() / _operandeDroit->calculer();
}

void Division::afficher() {
    _operandeGauche->afficher();
    cout << "/";
    _operandeDroit->afficher();
}

void Division::afficherNPI() {
    _operandeGauche->afficherNPI();
    cout << " ";
    _operandeDroit->afficherNPI();
    cout << "/";
}
