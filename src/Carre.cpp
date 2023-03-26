#include "Carre.h"

Carre::Carre(std::shared_ptr<Expression> expression)
    : OperateurUnaire(expression) {}

double Carre::evaluer() const {
    double valeur = expression_->evaluer();
    return valeur * valeur;
}

char Carre::symbole() const {
    return 'C'; // Utilisons 'C' pour représenter le carré
}
