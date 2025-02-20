#include <iostream>
#include <map>
#include <sstream>
using namespace std;

void sort_by_length(const string& text){ //Fonction qui trie les mots d'un string par longueur
    multimap<int, string> word_map; 
    stringstream s(text);
    string curr = ""; //Création du string curr qui va parcourir les mots du string

    while (s >> curr){ //tant que s n'est pas vide
        word_map.insert({curr.length(),curr}); //On ajoute le mot curr avec sa longueur comme clé dans la map
    }


    for (auto c : word_map){ //Affichage des mots en ordre
        cout << c.second << " "; 
    }
    cout << "\n";

}

int main(){ //test sur le string text
    string text = "Le langage C++ est rapide et efficace";
    sort_by_length(text);
}
