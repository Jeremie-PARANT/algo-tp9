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
**Suite des capacités observées**
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
**4. Observations**
Il ne retourne que false, car avec "annuaire[i].email == email", il compare les adresses mémoire.

**Question**
Favorable : Une comparaison (1er élément de l'annuaire).
Moyen : supérieur à 1 mais inférieur à N comparaisons (élément au milieu de l'annuaire).
Défavorable : N comparaisons (dernier élément de l'annuaire).

---

## Exercice 4
**Fonction complétée**
alice@mail.com : 19
bob@mail.com : 104
carole@mail.com : 747
david@mail.com : 189
eve@mail.com : 181

**Question 3**
C'est toujours le même indice. C'est indispensable pour pouvoir retrouver l'utilisateur à l'aide de l'indice du bucket correspondant.

**Question 4**
Non, il ne sont pas voisins.

**Question 5**
david@mail.com : -835
eve@mail.com : -843
On ne pourrait pas accéder aux tableaux correctement avec ces indices négatifs.

**Question 6**
Oui, deux addresse peuvent avoir le même indice. Ce n'est pas un défaut, mais une collision. Pour gérer les collisions, on peut utiliser des listes chaînée.

---

## Exercice 5

---

## Exercice 6

---