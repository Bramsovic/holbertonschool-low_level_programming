# Variadic Functions Project

Ce dépôt contient l'implémentation de fonctions variadiques en C. Il inclut des fonctions qui montrent comment utiliser des arguments variadiques, les manipuler, et fournir des exemples pratiques pour travailler avec ces fonctions. Ci-dessous se trouvent les détails sur les objectifs d'apprentissage, les exigences et les tâches implémentées.

## Ressources

Pour compléter ce projet, vous devez vous familiariser avec les ressources suivantes :

- **Bibliothèques C** : `stdarg.h`
- **Concepts** :
  - [Fonctions variadiques](https://en.wikipedia.org/wiki/Variadic_function)
  - [Const Keyword](https://en.cppreference.com/w/c/language/const)
- **Documentation** :
  - `man stdarg`

## Objectifs d'apprentissage

À la fin de ce projet, vous devez être capable de :

1. Comprendre ce que sont les fonctions variadiques.
2. Utiliser efficacement les macros `va_start`, `va_arg` et `va_end`.
3. Expliquer le but du qualificatif de type `const` et savoir l'utiliser.

## Exigences

- **Éditeur** : Vous pouvez utiliser `vi`, `vim`, ou `emacs`.
- **Compilation** : Tous les fichiers seront compilés sur **Ubuntu 20.04 LTS** avec :
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```

0. Beauty is variable, ugliness is constant
Fichier : 0-sum_them_all.c
Description : Une fonction qui retourne la somme de tous ses paramètres.
Prototype : int sum_them_all(const unsigned int n, ...);
Exigences :
Si n == 0, retournez 0.
Exemple :
  ```bash
  int sum = sum_them_all(2, 98, 1024); // Résultat : 1122
sum = sum_them_all(4, 98, 1024, 402, -1024); // Résultat : 500
  ```

  1. To be is to be the value of a variable
Fichier : 1-print_numbers.c
Description : Une fonction qui affiche des nombres, suivis d'une nouvelle ligne.
Prototype : void print_numbers(const char *separator, const unsigned int n, ...);
Exigences :
Le séparateur est une chaîne imprimée entre les nombres.
Si le séparateur est NULL, ne l'imprimez pas.
Imprimez une nouvelle ligne à la fin.
Exemple :
 ```bash
 print_numbers(", ", 4, 0, 98, -1024, 402); // Résultat : 0, 98, -1024, 402
 ```

2. One woman's constant is another woman's variable
Fichier : 2-print_strings.c
Description : Une fonction qui affiche des chaînes, suivies d'une nouvelle ligne.
Prototype : void print_strings(const char *separator, const unsigned int n, ...);
Exigences :
Le séparateur est une chaîne imprimée entre les chaînes.
Si l'une des chaînes est NULL, imprimez (nil).
Imprimez une nouvelle ligne à la fin.
Exemple :
 ```bash
print_strings(", ", 2, "Jay", "Django"); // Résultat : Jay, Django
```

3. To be is a to be the value of a variable
Fichier : 3-print_all.c
Description : Une fonction qui imprime n'importe quoi.
Prototype : void print_all(const char * const format, ...);
Spécificateurs de format :
c : char
i : integer
f : float
s : char * (si la chaîne est NULL, imprimez (nil))
Ignorez tout spécificateur de format non supporté.
Exigences :
Pas d'utilisation de for, goto, opérateurs ternaires, else, ou do...while.
Maximum 2 boucles while et 2 if.
Jusqu'à 9 variables peuvent être déclarées.
Imprimez une nouvelle ligne à la fin.
Exemple :
```bash
print_all("ceis", 'B', 3, "stSchool"); // Résultat : B, 3, stSchool
```

Structure du Répertoire
```bash
holbertonschool-low_level_programming/
└── variadic_functions/
    ├── README.md
    ├── 0-sum_them_all.c
    ├── 1-print_numbers.c
    ├── 2-print_strings.c
    ├── 3-print_all.c
    └── variadic_functions.h
```

Compilation

Pour compiler chaque fichier, utilisez :
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <function_file.c> -o <output>
```

Auteur

Ce projet a été développé dans le cadre du cursus de Holberton School sur la programmation bas niveau en C.

Bon codage ! :)
