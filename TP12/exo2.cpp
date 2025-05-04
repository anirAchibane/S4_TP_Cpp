#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream in_file("data.txt");
    ofstream out_file("report.txt");

    if (!in_file || !out_file) {
        cerr << "Erreur lors de l'ouverture des fichiers" << endl;
        return 1;
    }

    out_file << setw(20) << left << "Nom"
             << setw(10) << "Âge"
             << setw(15) << "Salaire" << endl;
    string line;

    while (getline(in_file, line)) {
        istringstream iss(line);
        string nom;
        int age;
        double salaire;
        if (iss >> nom >> age >> salaire) {
            out_file << fixed << setprecision(2)
            << setw(20) << left << nom
            << setw(10) << age
            << setw(15) << salaire << endl;
        }
    }

    in_file.close();
    out_file.close();
    cout << "Rapport genere dans report.txt" << endl;
    return 0;
}