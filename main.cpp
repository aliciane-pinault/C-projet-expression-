#include <iostream>
#include <limits>
#include <sstream>
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

Expression* parseAndCalculate(const std::string& input) {
    // Implémentez ici la logique de parsing et d'appel aux fonctions appropriées.
    // Ceci est un exemple simplifié qui ne gère pas les erreurs, les priorités et les parenthèses.
    std::istringstream iss(input);
    double a, b;
    std::string op;

    iss >> a >> op;

    if (op == "^") {
        iss >> b;
        return Puissance().calculer(Nombre(a), Nombre(b));
    }

    if (op == "sqrt") {
        return RacineCarree().calculer(Nombre(a));
    }

    if (op == "ln") {
        return LogNep().calculer(Nombre(a));
    }

    if (op == "abs") {
        return ValeurAbsolue().calculer(Nombre(a));
    }

    if (op == "carre") {
        return Carre().calculer(Nombre(a));
    }

    iss >> b;

    switch (op[0]) {
        case '+': return Addition().calculer(Nombre(a), Nombre(b));
        case '-': return Soustraction().calculer(Nombre(a), Nombre(b));
        case '*': return Multiplication().calculer(Nombre(a), Nombre(b));
        case '/': return Division().calculer(Nombre(a), Nombre(b));
        default: return nullptr;
    }
}

int main() {
    std::string input;
    
    while (true) {
        std::cout << "Entrez une expression à calculer (ou tapez 'q' pour quitter): ";
        std::getline(std::cin, input);
        if (input == "q") {
            break;
        }
        
        Expression* result = parseAndCalculate(input);
        if (result) {
            std::cout << "Résultat: " << result->calculer() << std::endl;
            delete result;
        } else {
            std::cout << "Erreur : expression invalide." << std::endl;
        }
    }

    return 0;
}




               













