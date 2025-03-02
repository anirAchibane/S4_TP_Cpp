# TP6_Anir_Achibane


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

* `Exercice=1`: création d'une matrice avec allocation dynamique et calcul de sa transposée.
  
* `Exercice=2`: création d'un graphe orienté avec allocation dynamique et implémentation des fonction `insert()` et de `dfs()`.
  
* `Exercice=3`: création d'un arbre binaire de recherche et implémentation des fonctions `insert()`, `remove()` , `search()` et `inorderTraversal()`.
  
* `Exercice=4`: création des structure `memoryBlock` pour simulation des blocs de mémoire, avec implémentation des fonctions `fusion()` et de libération avec `unique_ptr`.
  
* `Exercice=5`: Implémetation d'un cache LRU avec structures `node` et implémentation des fonction `insert()`. `display()` et `get()` avec politique d'éviction. 
