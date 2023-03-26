#include "Operateur_Binaire.h"

OperateurBinaire::OperateurBinaire(std::shared_ptr<Expression> gauche, std::shared_ptr<Expression> droite)
    : gauche_(gauche), droite_(droite) {}

void OperateurBinaire::afficher(std::ostream &os) const {
    os << "(";
    gauche_->afficher(os);
    os << " " << symbole() << " ";
    droite_->afficher(os);
    os << ")";
}

void OperateurBinaire::afficherPolonaiseInverse(std::ostream &os) const {
    gauche_->afficherPolonaiseInverse(os);
    os << " ";
    droite_->afficherPolonaiseInverse(os);
    os << " ";
    os << symbole();
}
