# TP5_Anir_Achibane


## Compilation

Pour compiler tous les exercices:
```sh
make
```
Pour compiler un exercice précis (ex: `EXO=3`)
```sh
make EXO3
```
Pour effacer les fichiers `.exe` des exercices compilés:
```sh
make clean
```
## Exécution

Pour executer un exercice: (exemple: `EXO=3`)

```sh
.\EXO3
```

## Exercices:

* `Exercice=1`: Détection d'un palindrome en négligeant les espaces et la casse, en utilisant `std::reverse` pour inverser le string et le comparer avec l'original.
  
* `Exercice=2`: Fréquence des mots dans un text en les stockant dans `std::unordered_map`, on parcoure le string mot par mot avec `std::istringstream`
  
* `Exercice=3`: Compression d'un texte en Encodage RLE <br> exemple: `aaabbccccddee` ->  `a3b2c4d2e2`
  
* `Exercice=4`: Extraction des 3 mots les plus fréquents dans un string en créant une `std::map` de fréquence triée.
  
* `Exercice=5`: Trie des mots par longueur on créant un `std::vector` d'élements: `(mot.length(), mot)` et le trier
  
* `Exercice=6`: Rcherche d'une forme d'email dans un string en vérifiant chaque `sous_string` possible si il vérifie la forme d'un email avec `std::regex`
