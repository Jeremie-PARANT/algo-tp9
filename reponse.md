# TP - Séance 9
## Exercice 0
**Message d'erreur**
expression must be a modifiable lvalue

**Question**
Pourquoi ne peut-on pas affecter une chaîne à un tableau de char avec = ?
Réponse : Car char est un tableau de caractères, il faut donc copier les caractères dans le tableau avec snprintf.

---

## Exercice 1
**Grille d'analyse**
Entrées Quelles sont les entrées, et sous quelle forme ?
Une adresse e-mail et l'annuaire contenant les comptes déjà inscrits.

Sorties Quelle sortie attend-on exactement ?
Un booléen indiquant si l'adresse e-mail est déjà présente dans l'annuaire.

Contraintes Quelles contraintes de temps, de mémoire, de
Quelque milliseconde.

Volume Quel volume de données, et comment évolue-t-il ?
30 à 50 000 000, ne peut que croitre.

Fréquence À quelle fréquence chaque opération est-elle appelée ?
Très fréquemment, à chaque tentative d'inscription d'un nouvel utilisateur.

**Question 2**
Parmi les cinq points, lesquels vous aideraient à choisir entre deux structures de données ? Lesquels ne vous apprennent rien sur ce choix ?
Réponse : Le volume de données et la fréquence des opérations, car ils influencent les performances. Les contraintes de temps et de mémoire peuvent également être pertinentes.

**Question 3**
Deux annuaires ont les mêmes entrées et la même sortie, l’un contient 30 employés consultés deux fois par jour, l’autre 5 millions de comptes interrogés mille fois par seconde. Quels sont les deux points de la grille qui les distinguent ?
Réponse : Le volume de données et la fréquence des opérations.

---

## Exercice 2
**Suite de valeurs**
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 16
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 32
Capacite: 64
Capacite: 64
Capacite: 64
Capacite: 64
Capacite: 64
Capacite: 64
Capacite: 64
Capacite: 64

**Question**
Combien de fois realloc a-t-il été appelé pour ces 40 insertions ? Et pour 1000 insertions ?
Réponse : Pour 40 insertions, realloc est appelé 3 fois (16, 32, 64). Pour 1000 insertions 7 fois (16, 32, 64, 128, 256, 512, 1024).

---

## Exercice 3

---

## Exercice 4

---

## Exercice 5

---

## Exercice 6

---