#include "Operateur.h"
#include <iostream>
using namespace std;


Operateur::Operateur(Expression*opg, Expression*opd)
{
    _operandeGauche =opg;
    _operandeDroit =opd;
}


Operateur::~Operateur()
{
    //dtor
}
