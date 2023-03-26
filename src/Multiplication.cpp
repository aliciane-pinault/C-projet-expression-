#include "Multiplication.h"

Multiplication::Multiplication(std::shared_ptr<Expression> gauche, std::shared_ptr<Expression> droite)
    : OperateurBinaire(gauche, droite) {}

double Multiplication::evaluer() const {
    return gauche_->evaluer() * droite_->evaluer();
}

char Multiplication::symbole() const {
    return '*';
}
