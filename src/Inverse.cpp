#include "Inverse.h"
#include <iostream>
using namespace std;

Inverse::Inverse(Expression*opu) :OperateurUnaire(opu)
{
    //ctor
}

Inverse::~Inverse()
{
    //dtor
}

//1 / opu
float Inverse::calculer() {
  return 1/_opunit->calculer();
}

void Inverse::afficher(){
    cout << "(1/" ;
    _opunit->afficher();
    cout << ")";
}

void Inverse::afficherNPI() {
    cout << " 1 ";
    _opunit->afficherNPI();
    cout << " / ";
}
