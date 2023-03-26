#include <iostream>
#include <string>
#include "Expression_Parser.h"

int main() {
    std::string input;

    std::cout << "Entrez une expression en notation polonaise inverse: ";
    std::getline(std::cin, input);

    try {
        auto expression = parse_expression(input);

        std::cout << "Expression: ";
        expression->afficher(std::cout);
        std::cout << std::endl;

        std::cout << "Expression en notation polonaise inverse: ";
        expression->afficherPolonaiseInverse(std::cout);
        std::cout << std::endl;

        std::cout << "Evaluation: " << expression->evaluer() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Erreur: " << e.what() << std::endl;
    }

    return 0;
}


   


















               













