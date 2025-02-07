#include <iostream>

#define exercice 1


#if exercice == 1

int main(){
    std::cout << "Exercice 1 is compiled" << std::endl;
#ifdef DEBUG
    std::cout << "DEBUG macro is defined" << std::endl;
#endif
}

#elif exercice == 2

int main(int argc, char* argv[]){
    std::cout << "Argument 1: " << argc << std::endl;
    std::cout << "Argument 2: " << argv;
    return 0;
}

#elif exercice == 3

namespace myspace{      //création de l'espace de noms personnalisé 
    int value = 33;     //décalartion de la variable
}

using namespace std;

int main(){
    cout << myspace::value << endl; //avec using namespace std
    std::cout << myspace::value << std::endl; // sans using namespace std
    return 0;
}

#elif exercice == 4
int main(){
    int n;
    float nv;
    std::cout << "Entrez un entier: ";
    std::cin >> n;
    std::cout << "Entrez un nombre decimal: ";
    std::cin >> nv;

    std::cout << "Valeurs saisies " << n << " et " << nv << std::endl; 
    return 0;
}

#endif
