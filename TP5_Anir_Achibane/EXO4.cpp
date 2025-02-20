#include <iostream>
#include <vector> 
#include <sstream>
#include <algorithm>
using namespace std;

void top_frequent_words(const string& text){ //Fonction qui affiche les 3 mots les plus utilisés dans un string
    vector< pair<string,int> > sorted_words;
    istringstream s(text);
    string current;  //On initialise un string current qui va parcourir les mots du string
    
    while (s >> current){ // tant que le stringStream s est non vide
        int ind = -1;     // On initialise un indice ind
        for (int i = 0; i < sorted_words.size(); i++){ //on cherche current dans note vecteur
            if (sorted_words[i].first == current){ //si on le trouve, on prend son indice
                ind = i;
                break;
            }
        } 

        if (ind == -1){ //si on a pas trouvé current dans notre vecteur, on l'ajoute avec fréquence = 1
            sorted_words.push_back({current,1});
        }
        else{
            sorted_words[ind].second++;  //si on l'a trouvé, on incrémente sa fréquence de 1
        }
    }

    //On trie le vecteur selon la fréquence des mots
    sort(sorted_words.begin(), sorted_words.end(), 
         [](const auto& a, const auto& b){ return a.second > b.second;}); 

    //On affiche les résultats
    for (int i = 0; i < min((int)sorted_words.size(), 3); i++){
        cout << sorted_words[i].first << " : " << sorted_words[i].second << "\n";
    }
}

int main(){ //test sur le string s: 
    string s = "C++ est rapide, C++ est puissant, C++ est utilisé";
    top_frequent_words(s);
}
