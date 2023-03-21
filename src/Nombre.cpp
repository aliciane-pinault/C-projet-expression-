#include "Nombre.h"

Nombre::Nombre(double valeur) : Expression(valeur) {}

double Nombre::calculer() const {
    return _valeur;
}

void Nombre::afficher() const {
    std::cout << _valeur;
}

void Nombre::afficherNPI() const {
    std::cout << _valeur;
}
