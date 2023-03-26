#include "Valeur_Absolue.h"

ValeurAbsolue::ValeurAbsolue(std::shared_ptr<Expression> expression)
    : OperateurUnaire(expression) {}

double ValeurAbsolue::evaluer() const {
    return std::abs(expression_->evaluer());
}

char ValeurAbsolue::symbole() const {
    return 'A'; // Utilisons 'A' pour représenter la valeur absolue
}
