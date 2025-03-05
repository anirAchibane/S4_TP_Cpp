#include <iostream>
#include <vector>
using namespace std;

class Etudiant { //création de classe étudiant
    public:
        Etudiant(string name, vector<float> grades){  //constructeur qui initialise les attributs nom / notes
            nom = name;
            notes = grades;
        }

        string nom;
        vector<float> notes;
    
        float moyenne(){  //méthode pour calcul de moyenne des notes
            float avg = 0;
            for(float i : notes){
                avg += i;
            }
            avg /= notes.size();
            return avg;
        }

        void showInfo(){  //méthode pour affichage des informations
            cout << "Nom: " << nom << endl;
            cout << "Notes: ";
            for(auto i : notes){
                cout << i << " ";
            }
            cout << endl;
        }

};

int main(){ //test sur un étudiant essai
    Etudiant karim {"karim", {15,18,12}};

    karim.showInfo();
    cout << "Moyenne: " << karim.moyenne() << endl;
}
