#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string keyword;
    cout << "Entrez le mot-cle a rechercher : ";
    getline(cin, keyword);
    ifstream in_file("input.txt");
    ofstream out_file("output.txt");
    if (!in_file || !out_file) {
        cerr << "Erreur lors de l'ouverture des fichiers" << endl;
        return 1;
    }
    string line;
    while (getline(in_file, line)) {
        if (line.find(keyword) != string::npos) {
            out_file << line << endl;
        }
    }
    in_file.close();
    out_file.close();
    cout << "Lignes contenant \"" << keyword << "\" copiees dans output.txt" << endl;
    return 0;
}
