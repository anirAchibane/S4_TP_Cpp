#include <iostream>
using namespace std;

class Shared_ptr{ //création de class shared pointer
    private:
        //attributs privés data et compteur de references
        int* data; 
        int* refCount;

    public:
        Shared_ptr(int value){ // constructeur qui initialise le compteur de réference à 1
            refCount = new int(1);
            data = new int(value);

            cout << "Creation d un Shared_ptr vers " << value << endl;
        }

        Shared_ptr(const Shared_ptr& old){ // constructeur de copie qui incrémente le compteur de réference et copie data vers l'attribut data du nouveau pointeur
            data = old.data;
            refCount = old.refCount;

            (*refCount)++;

            //message de copie - affichage du compteur de réferences
            cout << "Creation d une copie\n";
            cout << "Nombre de references: " << *refCount << endl;
        }

        ~Shared_ptr(){ //destructeur qui décremente le compteur
            (*refCount)--;
            cout << "Destruction d un Shared_Ptr\n"; //affichage de message de destruction
            // si le compteur de réferences atteint 0 ( plus de shared pointers sur la data )
            if (*refCount == 0){
                // on efface l'objet
                delete data;
                delete refCount;
                cout << "Objet supprime\n";
            }
            // s'il reste encore des shared pointers: on affiche le nombre de réferences restant 
            else{
                cout << "Nombre de references: " << *refCount << endl; 
            }
        }


};

int main(){ //essai
    // on crée un shared pointer
    Shared_ptr shared = Shared_ptr(10);
    {
        // on copie le shared pointer à l'intérieur du scope
        Shared_ptr shared1 = shared;
    }
    // à la sortie du scope, la copie va se détruir, ce qui va engendrer un message de suppression
    return 0;
    // quand int main retourne 0,  le shared pointer initial va devenir out of scope, et l'objet va être supprimé
}
