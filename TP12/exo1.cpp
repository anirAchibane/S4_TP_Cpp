#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {

    ofstream out_file("output.txt");
    
    if (!out_file) {
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
        return 1;
    }
    
    string line;
    double num;
    cout << "Entrez des nombres flottants (entree vide pour arreter) : ";
    while (true) {
        getline(cin, line);
        if (line.empty()){
            break;
        }
        
        istringstream iss(line);
        if(iss >> num){
            out_file << fixed << setprecision(2) << setw(10) << left << num << endl;
        }
        else{
            cerr << "Veuillez entrer un numero valide !" << endl;
        }
        
    }
    
    cout << "Nombres enregistres dans output.txt" << endl;
    out_file.close();
    return 0;

}

