#include <iostream>
#include <limits>
#include "Expression.h"
#include "Carre.h"
#include "Inverse.h"
#include "Oppose.h"
#include "Nombre.h"
#include "ValeurAbsolue.h"
#include "LogNep.h"
#include "RacineCarree.h"
#include "Puissance.h"

void clearInputStream() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    double nombre;
    std::cout << "Entrez un nombre: ";
    std::cin >> nombre;

    Carre carre;
    Inverse inverse;
    Oppose oppose;
    ValeurAbsolue valeur_absolue;
    LogNep log_nep;
    RacineCarree racine_carree;
    Puissance puissance;

    int choix = -1;

    while (choix != 0) {
        std::cout << "Choisissez une opération:\n";
        std::cout << "1. Carré\n";
        std::cout << "2. Inverse\n";
        std::cout << "3. Opposé\n";
        std::cout << "4. Valeur absolue\n";
        std::cout << "5. Log népérien\n";
        std::cout << "6. Racine carrée\n";
        std::cout << "7. Puissance\n";
        std::cout << "0. Quitter\n";
        std::cout << "Votre choix: ";
        std::cin >> choix;

        Expression* expr = nullptr;

        switch (choix) {
            case 1:
                expr = carre.calculer(Nombre(nombre));
                break;
            case 2:
                expr = inverse.calculer(Nombre(nombre));
                break;
            case 3:
                expr = oppose.calculer(Nombre(nombre));
                break;
            case 4:
                expr = valeur_absolue.calculer(Nombre(nombre));
                break;
            case 5:
                expr = log_nep.calculer(Nombre(nombre));
                break;
            case 6:
                expr = racine_carree.calculer(Nombre(nombre));
                break;
            case 7:
                double exposant;
                std::cout << "Entrez un exposant: ";
                std::cin >> exposant;
                expr = puissance.calculer(Nombre(nombre), Nombre(exposant));
                break;
            case 0:
                std::cout << "Au revoir !" << std::endl;
                break;
            default:
                std::cout << "Choix invalide" << std::endl;
        }

        if (expr) {
            std::cout << "Résultat: ";
            expr->afficher();
            std::cout << " = " << expr->calculer() << std::endl;
            delete expr;
        }

        clearInputStream();
    }

    return 0;
}









