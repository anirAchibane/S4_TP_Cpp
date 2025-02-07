#include <iostream>

#define exercice 1

int main(){

#if exercice == 1 
    std::cout << "Hello, World!" << std::endl;  //afficher les deux messages
    std::cout << "Bienvenue en C++!" << std::endl;

#elif exercice == 2

    int n; //déclarer le nombre n
    std::cout << "Entrez un nombre: ";  
    std::cin >> n;  // donner une valeur à n par l'utilisateur             
    std::cout << "Vous avez entree: " << n << std::endl;  //afficher le nombre

#elif exercice == 3

    float a,b;  //déclarer le nombre a et b
    std::cout << "Entrez deux nombres: "; 
    std::cin >> a >> b; //donner une valeur à a et b par l'utilisateur 
    std::cout << "Somme: " << a + b << std::endl; //afficher la somme de a et b
    std::cout << "Difference: " << a - b << std::endl;  //afficher la différence de a et b
    std::cout << "Produit: " << a*b << std::endl; //afficher le produit de a et b
    if(b != 0){ // traiter le cas ou b = 0
        std::cout << "Quotient: " << a / b << std::endl; //afficher le quotient de a et b
    }
    else{
        std::cout << "Quotient: Error" << std::endl; // message d'erreur pour b = 0
    }

    return 0;


#elif exercice == 4

    // voici le code corrigé:
        //  #include <iostream>
        //  int main(){
        //      std::cout << "Entrez un nombre:";
        //      int nombre; 
        //      std::cin >> nombre; 
        //      std::cout << "Vous avez entré: " << nombre << std::endl;
        //      return 0;
        //  }


#elif exercice == 5

    float temp; //déclarer temp
    std::cout << "Entrez temperature en Celsius: ";
    std::cin >> temp; //donner une valeur à temp par l'utilisateur 
    std::cout << "Temperature Fahrenheit: " << 1.8*temp + 32; //afficher temp on Fahrneheit
    return 0;
#endif

}

