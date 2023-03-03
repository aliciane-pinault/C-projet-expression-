#include "Carre.h"
#include <math.h>
#include <iostream>
using namespace std;

Carre::Carre(Expression*opu) :OperateurUnaire(opu)
{
    //ctor
}

Carre::~Carre()
{
    //dtor
}
float Carre::calculer() {
  return pow(_opunit->calculer(),2);
}

void Carre::afficher(){
    cout << "(" ;
    _opunit->afficher();
    cout << "^2)";
}

void Carre::afficherNPI() {
    _opunit->afficherNPI();
    cout << " ";
    _opunit->afficherNPI();
    cout << " * ";
}
