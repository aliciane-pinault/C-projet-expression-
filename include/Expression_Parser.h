#ifndef EXPRESSION_PARSER_H
#define EXPRESSION_PARSER_H

#include <string>
#include <stack>
#include <memory>
#include "Expression.h"

std::shared_ptr<Expression> parse_expression(const std::string& input);

#endif
