#include "Division.h"

Division::Division(std::shared_ptr<Expression> gauche, std::shared_ptr<Expression> droite)
    : OperateurBinaire(gauche, droite) {}

double Division::evaluer() const {
    return gauche_->evaluer() / droite_->evaluer();
}

char Division::symbole() const {
    return '/';
}
