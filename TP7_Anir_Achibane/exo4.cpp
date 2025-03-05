#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Objet { //création de classe objet
    public:
        Objet(string name, int quant){  //constructeur qui initialise les attributs nom / quantite
            nom = name;
            quantite = quant;
        }

        string nom;
        int quantite;
};

class Inventaire { //création de classe inventaire
    public:
        Inventaire(){ // constructeur qui affiche un message
            cout << "inventaire cree!\n";
        }

        ~Inventaire(){   //destructeur qui libère la mémoire associée aux objets contenus dans l'inventaire
            for(auto ob: inventory){
                delete ob;
            }
            
        }

        vector<Objet*> inventory;

        void add(Objet* ob){  //ajout d'un objet
            inventory.push_back(ob);
            cout << "Ajout de " << ob->nom << " (x" << ob->quantite << ")\n";
        }

        void remove(Objet* ob){  //suppression d'objet
            for (auto i = inventory.begin(); i != inventory.end(); i++){
                if (*i == ob){
                    inventory.erase(i);
                    return;
                }
            }
            cout << "Objet non trouve!!\n";
        }

        void display(){  //affichage de l'inventaire
            cout << "Inventaire: \n";
            for(Objet* ob : inventory){
                cout << "- " << ob->nom << " (x" << ob->quantite << ")\n";
            }
        }

        void freeInventory(){  // libération de l'inventaire
            for(auto ob: inventory){
                delete ob;    // on libère la mémoire associée aux objets contenus dans l'inventaire
            }
            inventory.clear();  // on vide l'inventaire
            cout << "Memoire de l inventaire liberee.\n";  // message de libération d'inventaire
            
        }

};


int main(){ //essai sur un inventaire test
    Objet* pomme = new Objet("Pomme", 3);
    Objet* epee = new Objet("Epee", 1);
    Inventaire inv;
    inv.add(pomme);
    inv.add(epee);
    inv.display();
    inv.freeInventory();
}
