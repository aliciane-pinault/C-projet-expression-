#include "Variable.h"
#include "Operateur.h"

#include <iostream>

using namespace std;

Variable::~Variable()
{
    //dtor
}

Variable::Variable(char name,float value) {
    _name = name;
    _value = value;
}

float& Variable::get_value() {
    return _value;
}

char& Variable::get_name() {
    return _name;
}

float Variable::calculer() {
    return _value;
}

void Variable::afficher() {
    if ( _value == 1){
        cout << _name;
    }else{

  cout << _value <<_name;
    }
}

void Variable::afficherNPI() {
 cout << _value;
}

void Variable::set_variable(char name, float value) {
  _name = name;
  _value = value;
}

Variable Variable::copy() const {
    return Variable(_name, _value);
}
