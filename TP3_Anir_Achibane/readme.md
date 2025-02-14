# TP3_Anir_Achibane


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

* `Exercice=1`: définition d'un tableau de 10 élements et on calcule son nombre d'élements en calculant sa taille et la taille d'un élement, et on divise la 1ère par la 2ème

* `Exercice=2`: Calculer le prix total d'un service de nettoyage en entrant le nombre des petites et grandes pièces, et on retourne le prix total + tva.
  
* `Exercice=3`: Calcul du factoriel avec une fonction `constexpr`, avec `static_assert`pour vérifier son résultat
  
* `Exercice=4`: affichage de deux variables, une locale et une globale.
  
* `Exercice=5`: déclaration des constantes `const moi = 12;` et `constexpr rayon =7;`,une macro pour définir `#define pi 3.14` ,et une variable `aire = p * rayon * rayon`, en essayant de changer les valeurs des contantes, on rencontre l'erreur suivante:
 ```
     main.cpp: In function 'int main()':
     main.cpp:80:13: error: assignment of read-only variable 'rayon'
     rayon = 2;
 ```
  
* `Exercice=6`: implementation d'une fonction `safeMultiply()` qui détecte si le produit de deux `int` dépasse la valeur max `std::numeric_limit<int>::max()`, si oui on retrourne `-1`, sinon on retroune le produit. 
