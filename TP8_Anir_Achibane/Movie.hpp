#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <string>

class Movie{ //Création de la classe Movie
    private: //Attributs de la classe
        std::string name;
        std::string rating;
        int watched;

    public: //Déclaration des méthodes
        Movie(std::string name_val, std::string rating_val, int watched_val);

        void set_name(std::string newName);
        void set_rating(std::string newRating);
        std::string get_name();
        std::string get_rating();
        int get_watched();

        void incrementWatched();
        void display();
};

#endif
