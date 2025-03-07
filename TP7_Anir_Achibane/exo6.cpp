#include <iostream>
#include <fstream>
using namespace std;

class Fichier { //création de classe Fichier
    public:
        ofstream* writer; //définition d'un pointeur ofstream pour écriture 
        ifstream* reader; //défintion d'un pointeur ifstream pour lecture

        Fichier() { //constructeur qui crée un fichier file.txt, alloue dynamiquement writer, et initialise reader en nullptr
            writer = new ofstream("file.txt");
            reader = nullptr;
        }

        ~Fichier(){ //destructeur qui efface le tout
            if (writer){
                writer->close();
                delete writer;
            }
            if (reader){
                reader->close();
                delete reader;
            }
            
            //message de libération
            cout << "Memoire de flux liberee\n";
        }

        void lecture(){ //fonction pour lecture du fichier
            cout << "Lecture des donnees...\n";
            cout << "Contenu du fichier:\n";
            string line;

            //si reader est déjà alloué, on l'efface
            if (reader){ 
                reader->close();
                delete reader;
            }
            //On reinitialise reader vers le début du fichier
            ifstream* reader = new ifstream("file.txt");

            //lecture du contenu du fichier
            while(getline(*reader, line)){
                cout << line << "\n";
            }
        }

        void ecrire(string input){
            cout << "Sauvegarde des donnees...\n";
            //écriture de l'input dans le fichier
            *writer << input << endl;
            writer->flush();
        }
};

int main(){ //essai sur un objet fichier test
    Fichier *test = new Fichier;

    test->ecrire("Bonjour, ceci est un test");
    test->lecture();
    delete test;

    return 0;
}
