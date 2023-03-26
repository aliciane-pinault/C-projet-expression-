#include "Constante.h"

Constante::Constante(double valeur) : valeur_(valeur) {}

double Constante::evaluer() const {
    return valeur_;
}

void Constante::afficher(std::ostream &os) const {
    os << valeur_;
}

void Constante::afficherPolonaiseInverse(std::ostream &os) const {
    os << valeur_;
}
