#include "Puissance.h"

Puissance::Puissance(std::shared_ptr<Expression> gauche, std::shared_ptr<Expression> droite)
    : OperateurBinaire(gauche, droite) {}

double Puissance::evaluer() const {
    return std::pow(gauche_->evaluer(), droite_->evaluer());
}

char Puissance::symbole() const {
    return '^';
}
