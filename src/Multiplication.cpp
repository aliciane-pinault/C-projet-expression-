#include "Multiplication.h"
#include <iostream>
using namespace std;

Multiplication::Multiplication(Expression *e1, Expression *e2) : Operateur(e1,e2)
{

}

Multiplication::~Multiplication()
{
    //dtor
}
float Multiplication::calculer() {
    return _operandeGauche->calculer() * _operandeDroit->calculer();
}

void Multiplication::afficher() {
    _operandeGauche->afficher();
    cout << "*";
    _operandeDroit->afficher();
}

void Multiplication::afficherNPI() {
    _operandeGauche->afficherNPI();
    cout << " ";
    _operandeDroit->afficherNPI();
    cout << " * ";
}
