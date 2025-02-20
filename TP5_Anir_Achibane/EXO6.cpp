#include <iostream>
#include <regex>
#include <string>
using namespace std;

bool contains_email(const string& text){ //Fonction qui retourne si le string contient un email
    regex exp("[A-Za-z0-9\._%+\-]+@[A-Za-z0-9\.\-]+\.[A-Za-z]{2,}");

    for (int i = 0; i < text.length(); i++){ 
        for (int j = i; j < text.length(); i++){ //On parcoure tous les sous_string possibles
            if (regex_match( text.substr(i,j-i+1) , exp)){ // Si le sous_string à la forme d'un email
                cout << "Adresse email detectee : " << text.substr(i,j-i+1) <<  "\n"; // On l'affiche
                return true;
            }
        }
    }
    return false; // On retourne false si on trouve pas de sous_string qui vérifie la forme régulière d'un email
}

int main(){ //test sur le string text
    string text = "Mon email est user@example.com";
    bool test = contains_email(text);
    cout << "Validite du test: " << test;
}
