#include <iostream>
using namespace std;

#ifndef EXO
#define EXO 1
#endif

#if EXO == 1


int main(){
    int C[5] = {10,20,30,40,50}; //creation du tableau
    int sum = 0;                
    cout << "Elements: ";
    for(auto i: C){
        cout << i << " ";   //affichage des elements du tableau
        sum += i;           //ajout des elements de la liste à la somme
    }
    cout << "\n";
    cout << "Somme: " << sum << "\n";    

    return 0;
}

#elif EXO == 2


int main(){
    int C[3][3] = {{1,2,3},     //Creation de tableau 3x3
                   {4,5,6},
                   {7,8,9}};

    cout << "Matrice: " << "\n";
    for(auto &row: C){                      //parcours de chaque ligne
        for(auto element: row){             //parcours de chaque element dans la ligne  
            cout << element << " ";  
        }
        cout << "\n";
    }

    int sommeDiagonal = 0;
    for(int i = 0; i < 3; i++){         //parcour des elements digaonaux
        sommeDiagonal += C[i][i];       // calcul de la somme des elements diagonaux
    }
    cout << "Somme diagonale : " << sommeDiagonal << "\n";

    return 0;
}

#elif EXO == 3

#include <array>
int main(){
    array<int, 5> arr = {1,2,3,4,5}; //intialisation de la liste
    int n = arr.size();

    cout << "Original: ";
    for (int i = 0; i < n;i++){
        cout << arr[i] <<" ";       //affichage des elements dans l'ordre original
    }
    cout <<  "\n";

    for(int i = 0; i < n/2;i++){    //inverser les elements de la liste
        int temp = arr[i];          //en echangeant chaque element par son symetrique par rapport au centre de la  liste
        arr[i] = arr[n-i-1];
        arr[n-1-i] = temp;
    }
    
    cout << "Inverse: ";
    for (int i= 0; i < n;i++){
        cout << arr[i] <<" ";       //affichage de la liste inversée
    }

    return 0;
}
#elif EXO == 4

#include <vector>
int main(){
    vector<int> liste;
    int n;

    cout << "Entrez la longueur de la liste: ";
    cin >> n;                           //definir n la longueur de la liste par l'utilisateur
    cout << "\n";

    for (int i = 0; i < n; i++){        //ajout des elements entree par l'utilisateur dans la liste
        int x;
        cout << "Entrez le nombre " << i+1 << ": ";  
        cin >> x;
        liste.push_back(x);
    }

    for (int i = 0; i < n; i++){
        liste[i] *= 2;              //doubler chaque element de la liste
    }

    cout << "Double: ";
    for (auto i : liste){           //affichage de la liste doublée
        cout << i << " ";
    }

    return 0;
}

#elif EXO == 5

#include <list>
int main(){
    list<int> myList = {10,20,30,40,50};

    cout << "Avant insertion: ";
    for(auto i : myList){  //affichage des elements avant l'insertion
        cout << i << " ";
    }
    cout << "\n";

    myList.push_back(60);       //insertion de 60 en fin de la liste
    myList.push_front(0);       //insertion de 0 au debut de la liste

    cout << "Apres insertion: ";
    for (auto i : myList){     // affichage des elements apres insertion
        cout << i << " ";
    }

    return 0;
}

#elif EXO == 6

#include <set>
int main(){
    set<int> mySet = {5,10,15,20};
    cout << "Original: ";
    for(auto i : mySet){
        cout << i << " ";    //affichage des elements du set
    }
    cout << "\n";

    int n = 10;
    mySet.insert(n);         //essaie d'inserer un element deja contenue dans le set
    cout << "Apres insertion de  " << n << ": ";
    for(auto i : mySet){
        cout << i << " ";    // affichage des elements apres insertion (pas de changement)
    }

    return 0;
}

#elif EXO == 7

#include <map>

int main(){
    map<string, int> etudiant_notes;  // initialisation de la map

    etudiant_notes["Jhon"] = 85;       //ajout des elements à la map
    etudiant_notes["Alice"] = 90;
    etudiant_notes["Bob"] = 78;

    for(auto couple : etudiant_notes){
        cout << couple.first << " : " << couple.second <<"\n";  //affichage des elements (clé : valeur)
    }

}

#elif EXO == 8

#include <unordered_map>
#include <string>

int main(){
    unordered_map<string, int> freq;
    string s;
    cout << "Entrez une chaine de caracteres: ";
    getline(cin, s);                     //definir la chaine de caractère par l'utilisateur
    string current = "";                 //initialisation d'une chaine intermediare avec laquel on va compter la reccurence des mots dans s

    for(int i = 0; i < s.size();i++){    //parcour de la chaine s
        
        if (i == s.size() - 1){          //si on arrive à la fin de la chaine
            if (s[i] == ' '){            //on saute les espaces vides
                continue;
            }
            else{
                current += s[i];        //on ajoute le dernier caractère à current et on compte la valeur de current dans la map
                if (freq.count(current)){
                    freq[current] += 1;  // si current est deja trouvé on ajoute 1 à son compteur
                }
                else{
                    freq[current] = 1;   // si current est nouveau on initialise son compteur à 1
                }
                current = "";
            }
        }
        if (s[i] == ' '){       //si on arrive à la fin d'un mot
            if (freq.count(current)){   // si current est deja trouvé on ajoute 1 à son compteur
                freq[current] += 1; 
            }
            else{
                freq[current] = 1;      // si current est nouveau on initialise son compteur à 1
            }
            current = "";
        }
        else{
            current += s[i];       //si le mot n'est pas encore fini on ajoute le caractère à current
        }
    }

    for(auto couple: freq){
        cout << couple.first << " : " << couple.second << "\n";   //affichage des resultats
    }
}

#elif EXO == 9

#include <vector>
#include <algorithm>

int main(){
    
    vector<int> liste = {2,4,3,6,10,19,12,7};   //initialisation de la liste
    cout << "Original: " << "\n";
    for(auto i : liste){                //affichage de la liste originale
        cout << i << " ";
    }
    cout << "\n";

    sort(liste.begin(), liste.end());   //trier la liste par ordre croissant
    
    cout << "Trie: ";
    for(auto i : liste){
        cout << i << " ";              //affichage des resultats
    }
    cout << "\n";                      
}

#elif EXO == 10
#include <set>
int main(){ //algorithme de la plus longue sequence consecutive dans une liste
    int n;
    cout <<  "Entrez nombre d elements: ";
    cin >> n;               //taille de la liste

    set<int> liste;

    for(int i = 0; i < n; i++){   //création de la liste
        cout << "Entrez le nombre " << i + 1 <<" : ";
        int x;
        cin >> x;
        liste.insert(x);
    }

    int longestOrigin = 0;        //variable pour stocker l'indice de depart de la sequence recherchée
    int longest = 0;              // variable pour stcoker la longueur de la sequence recherchée
    for(auto i : liste){          //parcour des elements de la liste
        if (!liste.count(i-1)){   // i est un potentiel point de depart de notre sequence si i - 1 n'existe pas dans la liste
            int l = 0;                
            while (liste.count(i+l)){
                l++;                    //on vérifie à chaque fois si i + l fait partie de la sequence qui debute par i est contenue dans la liste
            }
            if (l > longest){           //Si on trouve une nouvelle sequence plus longue que celle qu'on à deja trouvée
                longest = l;            //On stocke sa longueur
                longestOrigin = i;      //On stocker son point de départ
            }
        }
    }

    cout << "La plus longue sequence consecutif est:\n";        //affichage des resultats
    for(int i = longestOrigin; i <= longestOrigin + longest; i++){
        cout << i << " ";
    } 
}
#elif EXO == 11

#include <iostream>
#include <list>
#include <unordered_map>
 
using namespace std;

void put(unordered_map<int, list<pair<int,int>>::iterator > &lru, list<pair<int,int>> &cache, int capacity, int key, int value){ //Ajout du couple (key, value) au cache
    if (lru.count(key)){                    //si key existe deja: on met a jour sa valeur et on place le couple (key,value) au debut du cache
        auto it = lru[key];       
        int old_val = it->second;
        cache.erase(it);

        cache.push_front({key,value});
        lru.insert({key, cache.begin()});

    }
    else{
        cache.push_front({key,value});  // si key n'existe pas deja, on ajoute directement le couple (key,value) au debut du cache
        lru.insert({key, cache.begin()});

        if (cache.size() > capacity){ // si la taille du cache depasse la taille determinée, on supprime le dernier element (le moins utilisé)
            cache.erase(--cache.end());
        }
        
    }
}

int get(unordered_map<int, list<pair<int,int>>::iterator > &lru, list<pair<int,int>> &cache, int key){
    //si key est un cle dans lru
    // on place (key,value) au debut du cache et on retourne value
    if (lru.count(key) > 0){
        auto it = lru[key];
        int value = it->second;
        cache.erase(it);

        cache.push_front({key,value});
        lru[key] = cache.begin();
        
        return value;
    }
    // si on trouve pas key dans lru, on retourne -1
    return -1;
}

void display(list<pair<int,int>> &cache){
    //directement : on parcourt les elements du cache et on les affiches un par un
    for (auto c : cache){
        cout << "( " << c.first << " , " << c.second << " )" << " ";
    }
    cout << "\n";
    
}

//test des fonctions: 

int main(){
    list<pair <int,int>> cache;
    unordered_map<int, list<pair<int,int>>::iterator   > lru;

    int capacity = 2;
    put(lru,cache,capacity,1,10);
    put(lru,cache,capacity,2,20);

    cout << "Etat du cache: ";
    display(cache);
    
    cout << "Accee a la cle 1: " << get(lru, cache, 1) << "\n";

    put(lru,cache,capacity,3,30);
    cout << "Ajout de (3,30) va entrainer la supression de (2,20)\n";

    cout << "Etat du cache: ";
    display(cache);

}

#else
#error "cet EXO n existe pas"
#endif
