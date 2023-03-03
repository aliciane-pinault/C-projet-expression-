#include "Operateur.h"
#include <iostream>
using namespace std;


Operateur::Operateur(Expression*opd, Expression*opg)
{
    _operandeDroit =opd;
    _operandeGauche =opg;
}


Operateur::~Operateur()
{
    //dtor
}
