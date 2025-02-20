#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& text){ //Fonction pour tester si un string est un palindrome
    string check = "";  //  un string check dans lequel on ajoute notre string modifié
    
    for(int i = 0; i < text.length(); i++){
        if (text[i] == ' '){   // On saute les espaces vides
            continue;
        }
        if (isupper(text[i])){
            check += tolower(text[i]);  //On change les majuscules en miniscule
        }
        else{
            check += text[i];
        }
    }
    int countfor = 0, countback = 0;  //une varibale count pour le string original et une pour le string inversé
    for (int i = 0; i < check.length(); i++){  
        countfor += (i+1)*(int)check[i];   //On ajoute au premier count
    }
    reverse(check.begin(),check.end()); //On inverse le string 
    for (int i = 0; i < check.length(); i++){
        countback += (i+1)*(int)check[i];  //on ajoute au deuxième count
    }
  
    // si les deux count ont la même valeurs: le string est un palindrome.
    return countfor == countback ? true : false;
}

int main(){
    string text; 
    cout << "Entrez un texte: "; 

    getline(cin,text); //test sur un string entré par l'utlisateur
    
    if (isPalindrome(text)){ //Affichage du résultat
        cout << "`" + text + "` est un palindrome\n";
    }
    else{
        cout << "`" + text + "` n est PAS un palindrome\n";
    }
}
