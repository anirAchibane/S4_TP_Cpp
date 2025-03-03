#include <iostream>
using namespace std;

class Joueur { //Création de classe joueur
    public:
        Joueur(string nom, int score){ //Constructeur qui attribut des valeurs au noms et score et affiche un message indiquant la construction d'un objet Joueur
            this->nom = nom;
            this->score = score;
            cout << "Constructeur appellee\n";
        }

        ~Joueur(){ //Destructeur affichant un message indiquant la suppression d'un objet joueur
            cout << "Objet dynamique supprimee\n";
        }
        
        string nom;
        int score;

        void showInfo(){
            cout << "Joueur: " << nom << ", Score: " << score << endl;
        }
};


int main(){ //test du  constructeur / destructeur
    //Allocation dynamique d'un objet joueur
    Joueur* alice = new Joueur("Alice", 100);

    alice->showInfo();

    //Désallocation de mémoire
    delete alice;
}
