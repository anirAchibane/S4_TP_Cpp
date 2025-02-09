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

* `Exercice=1`: inclusion de `<iostream>` \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Définition de `PI` par marcos \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Vérification de l'existance de la macro `DEBUG` par un if statement

* `Exercice=2`: Implémentation de `main()` avec `int argc` et `char* argv[]` \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;et aﬀichage de `argc` et `argv[]` par `std:cout` \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;On remarque l'affichage d'un nombre et une adresse mémoire aléatoire

* `Exercice=3`: Création d'un namespace personalisé nommé myspace dans lequel on déclare une variable value \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;on affiche la variable avec `myspace::value`

* `Exercice=4`: On déclare deux variables `int n` et `float nv` \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;On demande à l'utlisateur de les entrer avec `cin >>` \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;On les affiche avec `cout <<` 
