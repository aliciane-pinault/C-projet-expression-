#pragma once
#include "Expression.h"

class OperateurUnaire {
public:
    virtual Expression* calculer(Expression const& expr) = 0;
};
