#include "Movies.hpp"
#include <iostream>

//Définition des méthodes de la classe Movies: add_movie(), increment_watched() et display()
bool Movies::add_movie(std::string name, std::string rating, int watched){
    for (auto m : collection){
        if (m.get_name() == name){
            return false;
        }
    }
    collection.push_back(Movie(name,rating,watched));
    return true;
}

bool Movies::increment_watched(std::string newName){
    for(auto &m : collection){
        if (m.get_name() == newName){
            m.incrementWatched();
            return true;
        }
    }
    return false;
}

void Movies::display(){
    if (collection.size() == 0){
        std:: cout << "Désolé, aucun film à afficher\n";
        return;
    }
    std::cout << "\n===================================\n";
    for (auto m : collection){
        m.display();
    }
    std::cout << "\n===================================\n";
}
