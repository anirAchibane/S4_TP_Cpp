#include <iostream>
using namespace std;

class Joueur { //création de classe Joueur
    public:
        string nom;  //attributs: nom et score
        int score;

        void ShowInfo(){  //afficher les infos du joueur
            cout << "Joueur: " << nom << ", Score: " << score << endl;
        }
};


int main(){ //essai:
    Joueur alice, bob;  //création de deux objets joueurs
    //Définir les attributs des objets créé
    alice.nom = "Alice"; alice.score = 100;
    bob.nom = "Bob"; bob.score = 200;

    //Affichage des infos
    alice.ShowInfo();
    bob.ShowInfo();

}
