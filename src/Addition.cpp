#include "Addition.h"
#include <iostream>
using namespace std;

Addition::Addition(Expression *e1, Expression *e2) : Operateur(e1,e2)
{

}
Addition::~Addition()
{
}

float Addition::calculer() {
  return _operandeGauche->calculer() + _operandeDroit->calculer();
}

void Addition::Afficher(){
    cout << "(" ;
    _operandeGauche->afficher();
    cout << "+";
    _operandeDroit->afficher();
    cout << ")";
}
