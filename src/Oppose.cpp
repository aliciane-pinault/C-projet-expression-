#include "Oppose.h"

Oppose::Oppose(std::shared_ptr<Expression> expression)
    : OperateurUnaire(expression) {}

double Oppose::evaluer() const {
    return -expression_->evaluer();
}

char Oppose::symbole() const {
    return '-';
}
