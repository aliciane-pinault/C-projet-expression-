#include <iostream>
#include <memory>
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

int main() {
    auto expression = std::make_shared<Addition>(
        std::make_shared<Multiplication>(
            std::make_shared<Constante>(2),
            std::make_shared<Inverse>(
                std::make_shared<Constante>(4)
            )
        ),
        std::make_shared<Soustraction>(
            std::make_shared<Division>(
                std::make_shared<Constante>(9),
                std::make_shared<Constante>(3)
            ),
            std::make_shared<Puissance>(
                std::make_shared<Constante>(3),
                std::make_shared<RacineCarree>(
                    std::make_shared<Constante>(4)
                )
            )
        )
    );

    auto expression_finale = std::make_shared<Carre>(
        std::make_shared<Oppose>(
            expression
        )
    );

    std::cout << "Expression: ";
    expression_finale->afficher(std::cout);
    std::cout << std::endl;
    std::cout << "Expression en notation polonaise inverse: ";
    expression_finale->afficherPolonaiseInverse(std::cout);
    std::cout << std::endl;

    std::cout << "Evaluation: " << expression_finale->evaluer() << std::endl;

    return 0;
}

   


















               













