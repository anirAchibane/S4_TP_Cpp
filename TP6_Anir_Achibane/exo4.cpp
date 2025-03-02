#include <iostream>
#include <memory>
using namespace std;

struct memoryBlock { //On crée une structure de bloc de mémoire
    int units;      // units: caractéristique de chaque bloc de mémoire
    
    memoryBlock(int u): units(u) {   // Lors de la création, on initialise le nombre d'unitée
        cout << "Bloc de memoire allouee de " << units << " unitee\n";
    }

    ~memoryBlock(){      //Lors de suppression: on affiche un mémoire indiquant que de la mémoire a été libérée
        cout << "Liberation de memoire\n";
    }


};

unique_ptr<memoryBlock> merge(unique_ptr<memoryBlock> block1, unique_ptr<memoryBlock> block2){  //Fusion de deux blocs en un seul
    unique_ptr<memoryBlock> mergedBlock = make_unique<memoryBlock>(block1->units + block2->units); //On crée un troisième bloc avec la somme des unités des deux premiers

    block1.reset();    //On libère les deux premiers bloc 
                      // ( .reset() va réinitialiser la valeur des pointeurs en nullptr, ce qui va déallouer l'espace mémoire dédiée à la variable créé puisque il s'agit s'un smart pointer de thype unique_ptr )
    block2.reset();
    return mergedBlock;
}

void freeMemory(unique_ptr<memoryBlock>& block1){ //Libérer un bloc de mémoire
    block1.reset();  // ( .reset() va réinitialiser la valeur des pointeurs en nullptr, ce qui va déallouer l'espace mémoire dédiée à la variable créé puisque il s'agit s'un smart pointer de thype unique_ptr )
}


int main(){ //essai sur deux blocs de mémoire test:
    unique_ptr<memoryBlock> block1 = make_unique<memoryBlock>(100);
    unique_ptr<memoryBlock> block2 = make_unique<memoryBlock>(200);

    unique_ptr<memoryBlock> block3 = merge(move(block1), move(block2));

    cout << "memoire fusionnee: " << block3->units << endl;

    block3.reset();

};
