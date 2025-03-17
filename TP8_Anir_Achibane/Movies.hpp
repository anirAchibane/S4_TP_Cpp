#ifndef MOVIES_HPP
#define MOVIES_HPP

#include "Movie.hpp"
#include <vector>

class Movies{ //Création de la classe Movies
    private: //attribut: vecteur des objets de class Movie
        std::vector<Movie> collection;

    public: //Déclaration des méthodes
        bool add_movie(std::string name, std::string rating, int watched);
        bool increment_watched(std::string newName);
        void display();

};

#endif
