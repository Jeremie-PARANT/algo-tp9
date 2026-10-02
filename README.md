# TP - Séance 9
## Exercice 0
**Message d'erreur**
expression must be a modifiable lvalue

**Question**
Car char est un tableau de caractères, il faut donc copier les caractères dans le tableau avec snprintf.

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
Le volume de données et la fréquence des opérations, car ils influencent les performances. Les contraintes de temps et de mémoire peuvent également être pertinentes.

**Question 3**
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

**Question**Pour 40 insertions, realloc est appelé 3 fois (16, 32, 64). Pour 1000 insertions 7 fois (16, 32, 64, 128, 256, 512, 1024).

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
**Question 3**
La liste chaînée pointe vers le mauvais élément (lui-même).

**Question 4**
Car si on ne le sauvegarde pas avant, on perd la référence au prochain élément de la liste chaînée.
---

## Exercice 6
**Sortie obtenue**
--- ANNUAIRES VIDES ---
[OK] Recherche vide - séquentiel
[OK] Recherche vide - hachage

--- RECHERCHE DES 5 UTILISATEURS ---
[OK] alice@mail.com - séquentiel
[OK] alice@mail.com - hachage
[OK] bob@mail.com - séquentiel
[OK] bob@mail.com - hachage
[OK] carole@mail.com - séquentiel
[OK] carole@mail.com - hachage
[OK] david@mail.com - séquentiel
[OK] david@mail.com - hachage
[OK] eve@mail.com - séquentiel
[OK] eve@mail.com - hachage

--- ADRESSES ABSENTES ---
[OK] bibi@mail.com - séquentiel
[OK] bibi@mail.com - hachage
[OK] bob2@mail.com - séquentiel
[OK] bob2@mail.com - hachage

--- TEST DE LA CASSE ---
[OK] Alice@mail.com - séquentiel
[OK] Alice@mail.com - hachage

--- RESULTAT FINAL ---
Tests réussis : 18
Tests échoués : 0


**Code de retour**
0