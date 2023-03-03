#include "RacineCar.h"
#include <math.h>
#include <iostream>
using namespace std;
RacineCar::RacineCar(Expression*opu) :OperateurUnaire(opu)
{
    //ctor
}

RacineCar::~RacineCar()
{
    //dtor
}

float RacineCar::calculer() {
  return sqrt(_opunit->calculer());
}

void RacineCar::afficher(){
    cout << "(V" ;
    _opunit->afficher();
    cout << ")";
}

void RacineCar::afficherNPI() {
    cout << " ";
    _opunit->afficherNPI();
    cout << " V ";
}
