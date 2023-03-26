#include "Expression_Parser.h"
#include "Constante.h"
#include "Addition.h"
#include "Soustraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "Puissance.h"
#include "Racine_Carree.h"
#include "Carre.h"
#include "Oppose.h"
#include "Inverse.h"
#include "Log_Nep.h"
#include "Valeur_Absolue.h"
#include <sstream>
#include <stack>

std::shared_ptr<Expression> parse_expression(const std::string& input) {
    std::istringstream iss(input);
    std::stack<std::shared_ptr<Expression>> stack;

    std::string token;
    while (iss >> token) {
        if (isdigit(token[0]) || (token.length() > 1 && token[0] == '-' && isdigit(token[1]))) {
            stack.push(std::make_shared<Constante>(std::stod(token)));
        } else {
            auto right = stack.top();
            stack.pop();
            if (token == "+") {
                auto left = stack.top();
                stack.pop();
                stack.push(std::make_shared<Addition>(left, right));
            } else if (token == "-") {
                auto left = stack.top();
                stack.pop();
                stack.push(std::make_shared<Soustraction>(left, right));
            } else if (token == "*") {
                auto left = stack.top();
                stack.pop();
                stack.push(std::make_shared<Multiplication>(left, right));
            } else if (token == "/") {
                auto left = stack.top();
                stack.pop();
                stack.push(std::make_shared<Division>(left, right));
            } else if (token == "^") {
                auto left = stack.top();
                stack.pop();
                stack.push(std::make_shared<Puissance>(left, right));
            } else if (token == "sqrt") {
                stack.push(std::make_shared<RacineCarree>(right));
            } else if (token == "square") {
                stack.push(std::make_shared<Carre>(right));
            } else if (token == "oppose") {
                stack.push(std::make_shared<Oppose>(right));
            } else if (token == "inverse") {
                stack.push(std::make_shared<Inverse>(right));
            } else if (token == "lognep") {
            stack.push(std::make_shared<LogNep>(right));
            } else if (token == "abs") {
            stack.push(std::make_shared<ValeurAbsolue>(right));
            } else {
            throw std::runtime_error("Opérateur inconnu: " + token);
            }

        }
    }

    if (!stack.empty()) {
        return stack.top();
    } else {
        throw std::runtime_error("Expression invalide.");
    }
}
