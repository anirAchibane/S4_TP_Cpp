#include <iostream>

#ifndef EXO
#define EXO 1
#endif

#if EXO == 1

int main(){
    int tab[10] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "Taille totale du tableau: " << sizeof(tab) << " octects" << std::endl; //         affichage de taille du tableau
    std::cout << "Taille d'un element: " << sizeof(tab[0]) << " octects" << std::endl;  //          affichage de taille d'un element du tableau
    std::cout << "Nombre d'elements: " << sizeof(tab)/sizeof(tab[0]) << " octects" <<std::endl;  // affichage du nombre d'elements
    return 0;
}  

#elif EXO == 2

using namespace std;
int main(){
    int largeN, smallN;
    const int priceLarge = 350, priceSmall = 250;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: ";      
    cin >> smallN;                    //valeur du nombre de petites pieces donnee par utilisateur 
    cout << "Number of large rooms: ";
    cin >> largeN;                    // valeur du nombre de grandes pieces donnee par utilisateur
    cout << "Price per small room:" << priceSmall << " dh" << endl;     //affichage du prix par petite piece
    cout << "Price per large room:" << priceLarge << " dh" << endl;     //affichage du prix par grande piece

    float cost = priceLarge*largeN + priceSmall*smallN;   // calcul du prix total
    float tax = 0.06*cost;                              // calcul de la tva 
    float total = cost + tax;                           // calcul du prix + tva
    cout << "Cost: " << cost << "dh" << endl;           //affichage des informations
    cout << "Tax: " << tax <<"dh" << endl;                  
    cout << "====================================" << endl;
    cout << "Total estimate: " << total << "dh" << endl;
    cout << "This estimate is valid for 30 days" << endl;
    

    return 0;
}

#elif EXO == 3

constexpr int factorial(int n){
    return (n == 1 ) ? 1 : n*factorial(n-1);
}

int main(){

    const int fact5{ factorial(5) };
    static_assert(fact5 == 120); //ce Static_assert() ne produit pas d'erreur lors de la compilation, donc la fonction retourne un résultat correct
    std::cout << "fact(5) = " << fact5; 
}



#elif EXO == 4

int value = 100;

int main(){
    int value = 50;
    std::cout << "variable locale: " << value << std::endl;  //affichage d'une varibale locale
    std::cout << "variable globale: " << ::value << std::endl; //affichage d'une variable globale
}


#elif EXO == 5

const int mois = 12;
constexpr float rayon = 7.0;
#define pi 3.14159

int main(){
    int aire = pi * rayon * rayon;    //calcul d'aire du cercle
    // mois = 11;
    std::cout << "Nombre de mois dans une annee : " << mois << "\n"; // affichage de la constante mois
    // rayon = 2;
    std::cout << "Rayon du cercle : " <<  rayon << "\n";        // affichage de la constante rayon
    std::cout << "Aire du cercle:  " <<  aire << "\n";          // affichage de l'aire
}



#elif EXO == 6
#include <limits>

int safeMultiply(int n, int m){
    long long testn = n, testm = m; // defintion des variables test pour calculer le produit

    if (testn * testm < std::numeric_limits<int>::max()){   //si le produit ne dépasse pas la borne sup des int
        return n * m;                                       //on retourne le produit
    }
    return -1;                                              //sinon on retourne -1
}

int main(){
    int a1 = 30000, b1 = 1000, result1 = safeMultiply(a1,b1);   // test où le resultat ne depasse pas la borne sup
    int a2 = 300000, b2 = 10000, result2 = safeMultiply(a2,b2); // test où le resultat ne depasse pas la brone inf

    //affichage des resultats
    std::cout << a1 << " * " << b1 << " = " << result1 << "\n";
    std::cout << a1 << " * " << b2 << " = " << result2 << "\n"; 
}

#else
#error " Cet Exercice n existe pas"
#endif
