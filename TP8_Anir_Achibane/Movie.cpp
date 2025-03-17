#include "Movie.hpp"
#include <iostream>

//Définition du constructeur à paramètres
Movie::Movie(std::string name_val, std::string rating_val, int watched_val)
    : name(name_val), rating(rating_val), watched(watched_val) {} 


//Définition des getters / setters
void Movie::set_name(std::string newName){
    name = newName;
}

void Movie::set_rating(std::string newRating){
    rating = newRating;
}

std::string Movie::get_name(){
    return name;
}

std::string Movie::get_rating(){
    return rating;
}

int Movie::get_watched(){
    return watched;
}

//Définition des méthodes incrementWatched(), display()

void Movie::incrementWatched(){
    watched++;
}

void Movie::display(){
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}
