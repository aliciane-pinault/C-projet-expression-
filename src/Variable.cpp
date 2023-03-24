#include "Variable.h"
#include "Operateur.h"

#include <iostream>


using namespace std;

Variable::~Variable()
{
    //dtor
}

Variable::Variable(char name,float value) {
    _name = name;
    _value = value;
}

float& Variable::get_value() {
    return _value;
}

char& Variable::get_name() {
    return _name;
}

float Variable::calculer() {
    return _value;
}

void Variable::afficher() {
    if ( _value == 1){
        cout << _name;
    }else{

  cout << _value <<_name;
    }
}

void Variable::afficherVariables(Variable* variables[], int nb_variables) {
    cout << "Liste des variables :\n";
    for (int i = 0; i < nb_variables; i++) {
        cout << "- ";
        variables[i]->afficher();
        cout << endl;
    }
}

void Variable::afficherNPI() {
 cout << _value;
}

void Variable::set_variable(char name, float value) {
  _name = name;
  _value = value;
}

Variable Variable::copy() const {
    return Variable(_name, _value);
}

void Variable::creerVariable(Variable* variables[], int& nb_variables) {
    char nom;
    float valeur;

    // Afficher la liste des variables existantes
    cout << "Liste des variables existantes :\n";
    for (int i = 0; i < nb_variables; i++) {
        cout << "   - " << variables[i]->get_value() << variables[i]->get_name() << "\n";
    }

    // Demander à l'utilisateur de sélectionner une variable
    cout << "Entrez le nom de la variable que vous souhaitez mettre a jour (ou entrez un nouveau nom pour creer une nouvelle variable) : ";
    cin >> nom;

    // Vérifier si la variable existe déjà
    int index = -1;
    for (int i = 0; i < nb_variables; i++) {
        if (variables[i]->get_name() == nom) {
            index = i;
            break;
        }
    }

    // Mettre à jour ou créer une variable
    if (index != -1) {
        cout << "La variable existe deja. Voulez-vous la remplacer (o/n) ? ";
        char choix;
        cin >> choix;
        if (choix == 'o') {
            cout << "Entrez la nouvelle valeur de la variable : ";
            cin >> valeur;
            variables[index]->set_variable(nom, valeur);
            cout << "Variable mise a jour.\n";
        }
    } else {
        cout << "Entrez la valeur de la nouvelle variable : ";
        cin >> valeur;
        // Créer une nouvelle variable
        Variable* nouvelleVariable = new Variable(nom, valeur);
        variables[nb_variables] = nouvelleVariable;
        nb_variables++;
        cout << "Variable creee.\n";
    }
}



