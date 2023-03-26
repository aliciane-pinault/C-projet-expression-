#include "Racine_Carree.h"

RacineCarree::RacineCarree(std::shared_ptr<Expression> expression)
    : OperateurUnaire(expression) {}

double RacineCarree::evaluer() const {
    return std::sqrt(expression_->evaluer());
}

char RacineCarree::symbole() const {
    return 'R'; // Utilisons 'R' pour représenter la racine carrée
}
