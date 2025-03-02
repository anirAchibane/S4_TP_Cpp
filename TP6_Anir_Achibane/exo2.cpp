#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <stack>

using namespace std;

struct graph {
    vector<pair<int,int>>* edges;
    unordered_set<int>* vertices;

    // Lors de la création du graphe:  on alloue l'espace mémoire dynamiquement pour initialiser edges et vertices
    graph(){ 
        edges = new vector<pair<int,int>>;
        vertices = new unordered_set<int>;
    }
    
    // En cas de suppression du graph: on libère la mémoire dynamiquement allouée
    ~graph(){
        delete edges;
        delete vertices;
    }

    // Fonction pour ajouter un noeud entre u et v:
    void add_edge(int u, int v){
        pair<int,int> edge = make_pair(u,v);

        if (find(edges->begin(), edges->end(), edge) != edges->end() ){
            cout << "This edge {" << u << " , " << v <<  "} already exists.\n";
        }
        else{
            edges->push_back(edge);
            vertices->insert(u);
            vertices->insert(v);
        }   
    }

    // fonction pour parcourir le graphe en profondeur:
    void dfs(int start){
        unordered_set<int>* unvisited = new unordered_set<int>; //initialisation d'un liste unvisited
        stack<int>* st = new stack<int>;                        //initialisation d'une pile pour afficher les noeuds dans l'ordre de profondeur

        st->push(start);    // on met le point de départ dans la pile
        for(auto vertex : *vertices){
            if (vertex != start) unvisited->insert(vertex); //on ajoute tous les noeuds sauf le point de départ dans unvisited
        }

        while(!st->empty()){ //tant que la pile n'est pas vide, il y a encore des noeuds à afficher
            int curr = st->top();       //en prend le noeud en cours: le 1er élement dans la pile
            st->pop();

            for (auto edge : *edges){
                if (edge.first == curr && find(unvisited->begin(), unvisited->end(), edge.second) != vertices->end()){ //Si on a un chemin entre le neoud en cours et un noeud non visité
                    st->push(edge.second);                                                                             // On ajoute le noeud dans la pile
                    unvisited->erase(edge.second);                                                                     // et on le marque comme visité
                }
            } 
        
            cout << curr << " ";  //On affiche le noeud en cours
        }

        delete unvisited;   //On efface unvisited et la pile st pour déallouer l'espace mémoire
        delete st;

    }



};

//exemple sur un graphe test.
int main(){               
    graph test;           
    test.add_edge(1,2);   
    test.add_edge(2,4);  //                      4    6 - > 7                    
    test.add_edge(2,3);  //                      ^    ^                            
    test.add_edge(3,5);  //                      |    |
    test.add_edge(3,6);  // le graphe test: 1 -> 2 -> 3 -> 5   
    test.add_edge(6,7);  //

    cout << "Parcoure en profondeur du graphe test: ";
    test.dfs(1);       
                       
    return 0;          
}                      
