#include "Inverse.h"

Inverse::Inverse(std::shared_ptr<Expression> expression)
    : OperateurUnaire(expression) {}

double Inverse::evaluer() const {
    return 1.0 / expression_->evaluer();
}

char Inverse::symbole() const {
    return 'I'; // Utilisons 'I' pour représenter l'inverse
}
