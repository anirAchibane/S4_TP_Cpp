#include <iostream>
using namespace std;

string encode_rle(const string& text){ // fonction qui retourne un string s en encodage RLE
    
    string encoded;
    char curr = text[0]; //initialisation d'un caractère curr qui traversera le string s
    int count = 0; //initialisation d'un compteur on 0
  
    for(int i = 0; i < text.length(); i++){  
        if (i == text.length() - 1){ // si on a atteint la fin du string 
            if (text[i] != curr){
                encoded += curr + to_string(count) + text[i] + "1"; //On ajoute le dernier élement si il est nouveau
            }
            else{
                encoded += curr + to_string(count+1); //On incrémente le compteur du caratère précedent si il ne change pas
            }
        }
        else if (text[i] != curr){ //Si on change de caractère
            encoded += curr + to_string(count); //On ajoute le caractère précedent avec son count au nouveau string
            count = 1; //On remet le compteur à 1
            curr = text[i]; //On change la valeur de curr
        }
        else{
            count++; // Si c'est le même caractère, on incrémente le compteur
        }
    }
    return encoded; //On retourne le nouveau string en encodage RLE
}

int main(){ //test sur le string test
    string text =  "aaabbccccddee";
    string encoded = encode_rle(text);
    cout << "Texte: " << text << endl;
    cout << "Encoded: " << encoded << endl;
}
