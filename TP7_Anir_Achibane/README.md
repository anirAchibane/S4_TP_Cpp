# TP7_Anir_Achibane


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

* `Exercice=1`: Définition de classe `Joueur` avec attributs `(nom, score)`, et implémentation de méthode pour afficher les infos du joueur.
  
* `Exercice=2`: Modification de la classe `Joueur` en utilisant des modificateurs d’accès `(public, private)`, et gestion avec pointeurs avec utilisation des opérateurs `->` et `.`, et allocation dynamique avec `new` et `delete`.
  
* `Exercice=3`: Modification de la classe `Joueur` en implémentant un constructeur et destructeur.
  
* `Exercice=4`: Gestion des objets d'une classe `Objet` contenue dans une classe `Inventaire` avec pointeurs dynamiques, et implémentation des méthodes pour ajouter et retirer des objets.
  
* `Exercice=5`: Création de classe `Etudiant` et implémentation d'une méthode pour calculer la moyenne des notes.

* `Exercice=6`: Création de classe `Fichier` permettant de lire et écrire dans un fichier texte, en utilisant des pointeur vers un flux de fichier, et méthodes pour sauvegarde et chargement de données.

* `Exercice=7`: Création de classe `Shared_ptr` qui gère un pointeur avec compteur de références, avec suppression automatique de l'objet lorsque le compteur atteint zéro.
