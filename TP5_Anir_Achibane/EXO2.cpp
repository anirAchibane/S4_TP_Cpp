#include <iostream>
#include <unordered_map> 
#include <sstream>
using namespace std;

void word_frequency(const string& text){ //Compter la fréquence des mots dans un string
    unordered_map<string, int> frequ;
    istringstream s(text);
    string current; //création d'un string current qui parcourera notre string initial
    
    while (s >> current){ //tant que le stringStream s n'est pas encore vide
        
        if (!frequ.count(current)){
            frequ[current] = 1;   //si current est nouveau on initialise son compteur à al valeur 1
        }
        else{
            frequ[current]++;    // Si current est déja compté on ajoute 1 au compteur
        }
    }

    for (auto c : frequ){  //Affichage des résultats
        cout << c.first << " -> " << c.second <<"\n";
    }
}

int main(){ //test sur le string s
    string s = "C++ est puissant est rapide est efficace";
    word_frequency(s);
}
