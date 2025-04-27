
# TP11_Anir_Achibane


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

* `Exercice=1`: Fonction `calculate` qui effectue une opération donnée par l'utilisateur avec gestion d'exceptions de division par zéro `DivideByzeroException` et opérateur inconnu `InvalidOperatorException`.


* `Exercice=2`: Classe `Inventory` qui contient un stock de type `int`, avec méthode d'ajout `add_items()`,de suppression `remove_items()`, et gestion d'exceptions de quantité négative `NegativeQuantityException` et de stock insuffisant `InsufficentStockException`.

  
* `Exercice=3`: Classe `Stack` avec capacité maximale, méthodes `push()`, `pop()`, et gestion d'exceptions de stack vide `StackEmptyException` et capacité maximale atteinte `StackFullException`.
