# TP9_Anir_Achibane


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

L'exercice demandé est d'implémenter un programme de manipulation des comptes bancaires, en créant la classe mère `Account` et les classes filles `Savings_Account`, `Checking_Account`, `Trust_Account`.

La structure des fichiers et comme suivant:

```sh
Account.hpp
```
Contient la création de la class `Account` avec ses attributs protected `string name`, `double balance`, la déclaration d'un constructeur à paramètres, ainsi que la déclaration des méthodes `deposit()`, `withdraw()`, et surcharge de `<<`.

```sh
Account.cpp
```

Contient la définition du constructeur à paramètres de `Account`, ainsi que la définition des méthodes `deposit()` `withdraw()` et de la surcharge de `<<`.

```sh
Savings_Account.hpp
```
Contient la création de la classe fille `Savings_Account` dérivée de `Account`, avec ses attributs protected `double def_int_rate` et `double int_rate`, la déclaration d'un constructeur à paramètres, ainsi que la déclaration de la méthode  `withdraw()`, et surcharge de `<<`.

```sh
Savings_Account.cpp
```

Contient la définition du constructeur à paramètres de `Savings_Account`, ainsi que la définition de la méthode `deposit()` et de la surcharge de `<<`.

```

```sh
Checking_Account.hpp
```
Contient la création de la classe fille `Checking_Account` dérivée de `Account`, avec son attribut `double per_check_fee`, la déclaration d'un constructeur à paramètres, ainsi que la déclaration de la méthode  `withdraw()`, et surcharge de `<<`.

```sh
Checking_Account.cpp
```

Contient la définition du constructeur à paramètres de `Checking_Account`, ainsi que la définition de la méthode `withdraw()` et de la surcharge de `<<`.


```sh
Trust_Account.hpp
```
Contient la création de la classe fille `Trust_Account` dérivée de `Account` avec ses attributs privées `double bonus_amount`, `double bonus_threshold`, `int max_withdrawals`, et `double max_withdrawals_percent`. Et la déclaration d'un constructeur à paramètres, ainsi que la déclaration des méthodes `deposit()`, `withdraw()`, et surcharge de `<<`.

```sh
Trust_Account.cpp
```

Contient la définition du constructeur à paramètres de `Trust_Account`, ainsi que la définition des méthodes `deposit()` `withdraw()` et de la surcharge de `<<`.

```

```sh
Account_util.hpp
```
Contient la création des fonctions `display()`, `deposit()`, `withdraw()` avec surcharge pour la classe `Account` et ses classes dérivées.

```sh
Account_Util.cpp
```
Implémentation des fonctions de `Account_Util.hpp`


```
main.cpp
```

Test de la classe `Account`, de ses classes filles `Savings_Account`, `Checking_Account`, et `Trust_Accounts` et de leurs méthodes.
