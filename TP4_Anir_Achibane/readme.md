# TP4_Anir_Achibane


## Compilation

```sh
g++ -o main main.cpp
```

## Exécution

```sh
.\main
```
cette commande exécutera l'exercice 1 automatiquement

Pour executer un exercice différent: (exemple: `EXO=3`)

```sh
g++ -o main main.cpp -DEXO=3
.\main
```

## Exercices:

* `Exercice=1`: Manipulation d’un tableau à une dimension
  
* `Exercice=2`: Manipulation d’un tableau 3x3
  
* `Exercice=3`: Affichage des elements d'un `std::array` et l'inverser
  
* `Exercice=4`: Stocker et afficher des valeurs données par l'utilisateur dans un `std::vector`
  
* `Exercice=5`: Utilisation de Liste Chaînée `std::list`
  
* `Exercice=6`: Utilisation d'un liste à éléments uniques `std::set`
  
* `Exercice=7`: Utilisation des paires Clé-Valeur `std::map`
  
* `Exercice=8`: Compteur de mots dans une chaine de caractères en utilisant des paires clé-valeur `std::unordered_map`
  
* `Exercice=9`: Initialisation et trie d'un `std::vector`
  
* `Exercice=10`: Algorithme de la Plus Longue Séquence Consécutive dans une liste à élements uniques `std::set`
  
* `Exercice=11`: Implémentation d’un Cache LRU (Least Recently Used) avec un liste de paires `std::list<pair<int,int>>` et des paires clé-valeur `std::unordered_map<int, std::list<std::pair<int, int>>::iterator>`
