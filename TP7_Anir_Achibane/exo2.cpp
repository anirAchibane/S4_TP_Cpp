#include <iostream>
using namespace std;

class Joueur {
    public: //attributs publiques accessibles

        ~Joueur(){ //message de suppression lors de destruction
            cout << "Objet dynamique supprimee\n";
        }
        
        string nom;
        int score;

        void ShowName(){ //affichage du nom
            cout << "Joueur: " << nom << endl;
        }
        void ShowScore(){ //affichage du score
            cout << "Score: " << score << endl;
        }

    private: //attributs privées non accessibles: id
        int id;
};


int main(){  
    Joueur* alice = new Joueur;  //Allocation dynamique d'un objet Joueur

    //Accès au attributs de l'objet alloué dynamiquement
    alice->nom = "Alice";
    (*alice).score = 100;

    alice->ShowName();
    (*alice).ShowScore();

    // Désallocation de mémoire
    delete alice;
}
