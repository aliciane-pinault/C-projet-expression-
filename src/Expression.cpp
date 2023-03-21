// src/expression.cpp

#include "expression.h"

Expression::Expression(double valeur) : _valeur(valeur) {}

double Expression::valeur() const {
    return _valeur;
}


