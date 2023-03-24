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
#include "Addition.h"
#include "Soustraction.h"
#include "Multiplication.h"
#include "Division.h"

void clearInputStream() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    double nombre;
    std::cout << "Entrez un nombre: ";
    std::cin >> nombre;

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
        std::cout << "8. Addition\n";
        std::cout << "9. Soustraction\n";
        std::cout << "10. Multiplication\n";
        std::cout << "11. Division\n";
        std::cout << "0. Quitter\n";
        std::cout << "Votre choix: ";
        std::cin >> choix;

        Expression* expr = nullptr;
        double second_nombre;

        switch (choix) {
            case 1:
                expr = Carre().calculer(Nombre(nombre));
                break;
            case 2:
                expr = Inverse().calculer(Nombre(nombre));
                break;
            case 3:
                expr = Oppose().calculer(Nombre(nombre));
                break;
            case 4:
                expr = ValeurAbsolue().calculer(Nombre(nombre));
                break;
            case 5:
                expr = LogNep().calculer(Nombre(nombre));
                break;
            case 6:
                expr = RacineCarree().calculer(Nombre(nombre));
                break;
            case 7:
                std::cout << "Entrez un exposant: ";
                std::cin >> second_nombre;
                expr = Puissance().calculer(Nombre(nombre), Nombre(second_nombre));
                break;
            case 8:
                std::cout << "Entrez un second nombre: ";
                std::cin >> second_nombre;
                expr = Addition().calculer(Nombre(nombre), Nombre(second_nombre));
                break;
            case 9:
                std::cout << "Entrez un second nombre: ";
                std::cin >> second_nombre;
                expr = Soustraction().calculer(Nombre(nombre), Nombre(second_nombre));
                break;
            case 10:
                std::cout << "Entrez un second nombre: ";
                std::cin >> second_nombre;
                expr = Multiplication().calculer(Nombre(nombre), Nombre(second_nombre));
                break;
            case 11:
                std::cout << "Entrez un second nombre: ";
                std::cin >> second_nombre;
                expr = Division().calculer(Nombre(nombre), Nombre(second_nombre));
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

               













