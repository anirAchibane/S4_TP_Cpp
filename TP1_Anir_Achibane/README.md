# TP1_Anir_Achibane


## Compilation

```sh
g++ -o main main.cpp
```

## Exécution

```sh
.\main
```
cette commande exécutera l'exercice 1 automatiquement

Pour executer un exercice différent: (exemple: `exercice=3`)

```sh
g++ -o main main.cpp -Dexercice=3
.\main
```


## Exercices:

* `Exercice=1`: utilisation de `std::cout` pour afficher les messages

* `Exercice=2`: utilisation de `std::cin` pour obtenir des infos par l'utilisateur
et les afficher en utilisant std::cout

* `Exercice=3`: utilisation de std:cin pour obtenir deux nombre
et afficher les résultats des opérations avec std:cout
Pour le quotient: on différencie le cas de `b == 0` en affichant un message d'erreur

* `Exercice=4`: correction du code donnée en ajoutant des points virgules en fin de ligne
et en fermant les " pour les chaines de caractères

* `Exercice=5`: std::cin pour obtenir un nombre float désignant une température
std::cout pour afficher sa valeur en Fahrenheit
