#include "Operateur_Unaire.h"

OperateurUnaire::OperateurUnaire(std::shared_ptr<Expression> expression)
    : expression_(expression) {}

void OperateurUnaire::afficher(std::ostream &os) const {
    os << symbole() << "(";
    expression_->afficher(os);
    os << ")";
}

void OperateurUnaire::afficherPolonaiseInverse(std::ostream &os) const {
    expression_->afficherPolonaiseInverse(os);
    os << " ";
    os << symbole();
}
