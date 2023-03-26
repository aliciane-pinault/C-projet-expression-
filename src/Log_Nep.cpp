#include "Log_Nep.h"

LogNep::LogNep(std::shared_ptr<Expression> expression)
    : OperateurUnaire(expression) {}

double LogNep::evaluer() const {
    return std::log(expression_->evaluer());
}

char LogNep::symbole() const {
    return 'L'; // Utilisons 'L' pour représenter le log népérien
}
