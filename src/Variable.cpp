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
    cout << "Entrez le nom de la variable : ";
    cin >> nom;
    cout << "Entrez la valeur de la variable : ";
    cin >> valeur;

    // Vérifier si la variable existe déjà
    for (int i = 0; i < nb_variables; i++) {
        if (variables[i]->get_name() == nom) {
            cout << "La variable existe deja. Voulez-vous la remplacer (o/n) ? ";
            char choix;
            cin >> choix;
            if (choix == 'o') {
                variables[i]->set_variable(nom, valeur);
                cout << "Variable mise a jour.\n";
            }
            return;
        }
    }

    // Créer une nouvelle variable
    Variable* nouvelleVariable = new Variable(nom, valeur);
    variables[nb_variables] = nouvelleVariable;
    nb_variables++;
    cout << "Variable creee.\n";
}


