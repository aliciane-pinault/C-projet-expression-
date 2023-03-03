#include "Lognep.h"
#include <math.h>
#include <iostream>
using namespace std;

Lognep::Lognep(Expression*opu) :OperateurUnaire(opu)
{
    //ctor
}

Lognep::~Lognep()
{
    //dtor
}

float Lognep::calculer() {
  return log(_opunit->calculer());
}

void Lognep::afficher(){
    cout << "(log(" ;
    _opunit->afficher();
    cout << "))";
}

void Lognep::afficherNPI() {
    cout << " ";
    _opunit->afficherNPI();
    cout << " ln ";
}
