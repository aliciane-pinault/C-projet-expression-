#include "Valeurabs.h"
#include <math.h>
#include <iostream>
using namespace std;
Valeurabs::Valeurabs(Expression*opu) :OperateurUnaire(opu)
{
    //ctor
}

Valeurabs::~Valeurabs()
{
    //dtor
}
float Valeurabs::calculer() {
  return abs(_opunit->calculer());
}

void Valeurabs::afficher(){
    cout << "(|" ;
    _opunit->afficher();
    cout << "|)";
}

void Valeurabs::afficherNPI() {
    _opunit->afficherNPI();
    cout << " ";
    _opunit->afficherNPI();
    cout << " |x| ";
}
