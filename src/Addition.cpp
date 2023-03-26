#include "Addition.h"

Addition::Addition(std::shared_ptr<Expression> gauche, std::shared_ptr<Expression> droite)
    : OperateurBinaire(gauche, droite) {}

double Addition::evaluer() const {
    return gauche_->evaluer() + droite_->evaluer();
}

char Addition::symbole() const {
    return '+';
}
