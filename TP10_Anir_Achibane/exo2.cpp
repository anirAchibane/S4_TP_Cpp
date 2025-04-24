#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Conteneur{
    private:
        int max_capacity;
        vector<T> content = {};
    public:
        Conteneur(int max_capacity): max_capacity(max_capacity){};

        void ajouter(T obj){
            if (content.size() < max_capacity){
                content.push_back(obj);
            }
            else{
                cout << "Maximum capacity reached!!" << endl;
            }
        }

        T obtenir(int i){
            return content[i];
        }

};

int main(){

    Conteneur<int> c1(3); // Capacité de 3
    c1.ajouter(10);
    c1.ajouter(20);
    c1.ajouter(30);
    c1.ajouter(40); // Capacité dépassée

    std::cout << c1.obtenir(0) << " " << c1.obtenir(1) << std::endl; // Affiche 10 20

    Conteneur<std::string> c2(2);
    c2.ajouter("Bonjour");
    c2.ajouter("Monde");
    std::cout << c2.obtenir(0) << " " << c2.obtenir(1) << std::endl; // Affiche Bonjour Monde
    return 0;
}