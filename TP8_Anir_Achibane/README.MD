# TP8_Anir_Achibane


## Compilation

Pour compiler:
```sh
make
```
Pour effacer le fichier `main.exe`:
```sh
make clean
```
## Exécution

Pour executer `main.exe`:

```sh
.\main
```

## Exercice:

L'exercice demandé est d'implémenter un programme de suivi des films regardé, en créant les classes `Movie` et `Movies` permettant de manipuler une liste de films regardés, ainsi que le compteur du nombre de visionnages de chaque film.

La structure des fichiers et comme suivant:

```sh
Movie.hpp
```
Contient la création de la class `Movie` avec ses attributs `std::string name`, `std::string rating` et `int watched`, la déclaration d'un constructeur à paramètres, ainsi que la déclaration des getters et setters `set_name()` `set_rating` `get_name()` `get_rating()` `get_watched()`, et des méthodes `incrementWatched()` et `display()`.

```sh
Movie.cpp
```

Contient la définition du constructeur à paramètres de `Movie`, ainsi que la définitions des getters, setters et des méthodes `incrementWatched()` `display()`

```
Movies.hpp
```

Contient la création de la class `Movies` avec son attribut `std::vector<Movie> collection`, ainsi que la déclaration des méthodes `add_movie()`, `increment_watched()` et `display()`.

```
Movies.cpp
```
Contient la définition des méthodes de `Movies` `add_movie()`, `increment_watched()` et `display()` qui font appel aux getters/setters et aux méthodes de la classe `Movie`.

```
main.cpp
```

Contient la déclaration des fonctions `increment_watched()` et `add_movie()`, qui font appel aux méthodes de la classe `Movies`, ainsi qu'un essai en manipulant des variables de type `Movie` et  `Movies`
