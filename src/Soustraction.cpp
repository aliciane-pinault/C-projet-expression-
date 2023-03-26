#include "Soustraction.h"

Soustraction::Soustraction(std::shared_ptr<Expression> gauche, std::shared_ptr<Expression> droite)
    : OperateurBinaire(gauche, droite) {}

double Soustraction::evaluer() const {
    return gauche_->evaluer() - droite_->evaluer();
}

char Soustraction::symbole() const {
    return '-';
}
