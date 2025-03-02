#include <iostream>
#include <list>
#include <unordered_map>
#include <memory>
 
using namespace std;

struct node { //Création de la structure node qui constituera les élements de notre cache
    int key;
    int value;
    weak_ptr<node> prev;
    shared_ptr<node> next;
};


void  put(int k, int val, shared_ptr<node>& head, shared_ptr<node>& tail, int capacity, unordered_map<int, weak_ptr<node>>& hashMap){
    //On crée le nouveau noeud à ajouter:
    shared_ptr<node> newElement = make_shared<node>();
    newElement->value = val; newElement->key = k;

    //On met le nouvel élement en tête du cache.
    newElement->next = head->next; 
    newElement->prev = head;
    head->next->prev = newElement;
    head->next = newElement;

    // Politique d'éviction: si la taille du cache dépasse une capacité définit au préalable: on efface l'élement le moins utilisé.
    auto i = head->next;
    int count = 0;
    while(i != tail){
        i = i->next;
        count++;  //On compte le nombre d'élement dans le cache
    }
    if (count> capacity){ //Si le nombre d'élements dépasse la capacité du cache: On enlève le dernier élement
        shared_ptr<node> toReset = tail->prev.lock();
        toReset->prev.lock()->next = tail;
        tail->prev = toReset->prev;

        hashMap.erase(toReset->key);
        toReset.reset();
    }

    hashMap[k] = newElement; //on ajoute le nouvel élement à la hashMap
    return;

}

int get(int k, unordered_map<int, weak_ptr<node>>& hashMap, shared_ptr<node>& head, shared_ptr<node>& tail){ // Retourner l'élement associé à la clé entrée
    auto it = hashMap.find(k);

    if (it != hashMap.end()){  //Si l'élement existe:
        auto i = it->second.lock();

        cout << "Valeur de cle (" << k << "): " << i->value << "\n"; //Message indiquant que l'élement a été trouvé

        //On enlève l'élement de sa position initiale dans le cache
        i->prev.lock()->next = i->next;
        i->next->prev = i->prev;

        //On remet l'élement à la tête du cache
        i->next = head->next;
        i->prev = head;
        head->next->prev = i;
        head->next = i;
        
        
        

        return i->value;
    }
    else{ // Si l'élement n'existe pas: en renvoie un message
    cout << "Element non trouvee!\n";
    }

}

void display(shared_ptr<node> head, shared_ptr<node> tail){ //Affichage des élements du cache
    shared_ptr<node> i = head->next;
    cout << "Cache actuel:  ";
    while(i != tail){ //On parcoure le cache du début à la fin.
        cout << i->value << " ";
        i = i->next;
    }
    cout << "\n";
}


//test de l'implementation: 

int main(){ //essai sur un cache test: 
    int capacity = 4;  //initialisation de la capacité du cache
    // initialisation de la tête et queue du cache
    shared_ptr<node> head = make_shared<node>();
    shared_ptr<node> tail = make_shared<node>();
    head->next = tail; head->value = -1; head->key = -1;
    tail->prev = head; tail->value = -1; tail->key = -1;

    //initalisation de la HashMap
    unordered_map<int, weak_ptr<node>> hashMap;

    //insertion des élements
    put(2,2,head,tail,capacity,hashMap);
    put(3,3,head,tail,capacity,hashMap);
    put(1,1,head,tail,capacity,hashMap);
    put(4,4,head,tail,capacity,hashMap);

    display(head, tail); //affichage

    put(5,5,head,tail,capacity,hashMap); //ajout de 5

    display(head,tail); //affichage ( On remarque que 2 a été enlevé car le cache a dépassé sa capacité après l'ajout de 5)

    get(1,hashMap,head,tail);

    display(head,tail); //affichage
}
