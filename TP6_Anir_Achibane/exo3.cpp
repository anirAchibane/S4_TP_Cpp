#include <iostream>
#include <vector>
using namespace std;

struct node {  //creátion de structure Node avec lesquels on créera notre arbre binaire de recherche
    int value = -1;
    node* leftChild {nullptr};
    node* rightChild {nullptr};
    
};

void insert(node* root, int element){   //Insertion d'un nouveau noeud dans l'arbre de racine root
    node* curr = root;
    node* newNode;
    newNode = new node;
    newNode->value = element;
    
    while (true){
        if (curr->value == -1){      //Si la racine est déjà vide: on insère directement dans la racine
            curr->value = element;
            delete newNode;
            return;
        }
        
        if (element < curr->value){ //si l'element est plus petit que l'élement en cours
            if (curr->leftChild == nullptr){  //Si son fils gauche est vide
                curr->leftChild = newNode;    //On insère dans le fils gauche
                return;
            }
            curr = curr->leftChild;           //Sinon on passe au fils gauche
        }
        else if (element > curr->value){ //si l'element est plus grand que l'élement en cours
            if (curr->rightChild == nullptr){  //Si son fils droit est vide
                curr->rightChild = newNode;    //On insère dans le fils droit
                return;
            }
            curr = curr->rightChild;           //Sinon on passe au fils droit
        }
        else{
            delete newNode;                  
            cout << "L element existe deja!\n";  //si l'element existe déjà on annulle l'insertion
            return;
        }
    }
}

node* remove(node* root, int element){     //enlever un élement de l'arbre binaire de recherche de racine root

    if (root == nullptr){                  //Si on trouve pas l'élement dans l'arbre: on annulle
        cout << "L element " << element << " n existe pas dans l arbre!\n";
        return root;
    }

    //On cherche la position de l'élement dans l'arbre:
    if (root->value > element){
        root->leftChild = remove(root->leftChild, element); 
    }
    else if (root->value < element){
        root->rightChild = remove(root->rightChild, element);
    }

    //Si on a trouvé l'élement à enlever
    else{

        if (root->rightChild == nullptr && root->leftChild == nullptr){ //Si il s'agit s'une feuille: on enlève directement.
            delete root;
            return nullptr;
        }

        else if(root->rightChild == nullptr){    //Si il a un fils gauche: on remplace par le fils gauche
            node* tmp = root->leftChild;
            delete root;
            return tmp;
        }
        
        else if(root->leftChild == nullptr){    //Si il a un fils droit: on remplace par le fils droit
            node* tmp = root->rightChild;
            delete root;
            return tmp;
        }

        else{          //Si il a deux fils droits et gauche: on remplace avec le plus petit élement dans le sous arbre droit
            node* replace = root->rightChild;    
            while(replace->leftChild != nullptr){
                replace = replace->leftChild;
            }
            root->value = replace->value;

            root = remove(root->rightChild, replace->value);
        }
    }
    return root;
}  

void search(node* root, int element){ //Rechercher un element dans l'arbre:
    node* current = root;    //on initialise un noeud current qui va parcourir l'arbre
    while (current != nullptr){
        if (current->value > element){   //si l'element est plus petit que le noeud en cours: on passe au fils gauche
            current = current->leftChild;
        }
        else if (current->value < element){  //si l'element est plus grand que le noeud en cours: on passe au fils droit
            current = current->rightChild;
        }
        else{
            cout << "element trouve\n";    //Sinon: on a trouvé l'élement
            return;
        }
    }
    cout << "element non trouve\n";        //Si on rencontre un noeud vide sans trouver l'élement: l'élement n'existe pas.
}

void inorderTraversal(node* root){        //Parcoure infixe de l'arbre binaire de recherche
    if (root == nullptr || root->value == -1) return;      //si on rencontre un noeud vide: on arrête

    inorderTraversal(root->leftChild);      //On affiche le sous arbre gauche
    cout << root->value << " ";            // Puis on affiche le noeud en cours
    inorderTraversal(root->rightChild);   //  Puis on affiche le sous arbre droit
}


//essai sur une BST test:
int main(){
    node* test = new node();
    test->value = -1;

    cout << "insertion\n";
    insert(test, 5);
    insert(test, 3);
    insert(test, 7);
    insert(test, 2);
    insert(test, 4);
    insert(test, 6);
    insert(test, 8);
    cout << "Elements inseree!\n";

    cout << "Parcoure infixe: ";
    inorderTraversal(test);
    cout << "\n";

    cout << "Recherche de 4: ";
    search(test, 4);

    cout << "Suppression de 4\n";
    test = remove(test, 4);

    cout << "Parcoure infixe apres suppression de 4: ";
    inorderTraversal(test);
}
