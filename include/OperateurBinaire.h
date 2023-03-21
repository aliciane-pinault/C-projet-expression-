#pragma once
#include "Expression.h"

class OperateurBinaire {
public:
    virtual Expression* calculer(Expression const& expr1, Expression const& expr2) = 0;
};
