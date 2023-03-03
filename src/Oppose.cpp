#include "Oppose.h"
#include <iostream>
using namespace std;

Oppose::Oppose(Expression*opu) :OperateurUnaire(opu)
{
    //ctor
}

Oppose::~Oppose()
{
    //dtor
}

float Oppose::calculer() {
  return -_opunit->calculer();
}

void Oppose::afficher(){
    cout << "( -" ;
    _opunit->afficher();
    cout << ")";
}

void Oppose::afficherNPI() {
    cout << " -";
    _opunit->afficherNPI();
    cout << " ";
}
