# TP10_Anir_Achibane


## Compilation

Pour compiler tous les exercices:
```sh
make
```
Pour compiler un exercice précis (ex: `exo=3`)
```sh
make exo3
```
Pour effacer les fichiers `.exe` des exercices compilés:
```sh
make clean
```
## Exécution

Pour executer un exercice: (exemple: `exo=3`)

```sh
.\exo3
```

## Exercices:

* `Exercice=1`: Fonction template `maximum` qui compare deux valeurs de type génerique, avec spécialisation pour type `string`.
    
* `Exercice=2`: Classe `Conteneur` qui contient une liste d'élement de type génerique, avec capacité maximale, et méthodes `add()` et `remove()`.
  
* `Exercice=3`: Classe `Pair` qui stocke deux valeurs de types géneriques. avec spécialisation pour `Pair<T, int>` et méthode `display()` qui utilise `if constexpr` pour l'affichage d'élement de type `bool`
  
* `Exercice=4`: Classe template `Matrix` de taille fixe `<int M, int N>` et élements de type génerique, avec méthode d'addition `add()` qui utilise une spécialisation partielle `MatrixAdder` avec `static_assert` pour vérifier la compaitibilié des deux matrices à additioner
