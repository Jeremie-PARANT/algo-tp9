#include <stdio.h>
#include "annuaire.h"

int nb_ok = 0;
int nb_echec = 0;

void verifier(const char *titre, bool obtenu, bool attendu)
{
    if (obtenu == attendu)
    {
        printf("[OK] %s\n", titre);
        nb_ok++;
    }
    else
    {
        printf("[ECHEC] %s\n", titre);
        nb_echec++;
    }
}

int main(void)
{
    User users[5];

    users[0].id = 1; snprintf(users[0].email, EMAIL_MAX, "alice@mail.com");
    users[1].id = 2; snprintf(users[1].email, EMAIL_MAX, "bob@mail.com");
    users[2].id = 3; snprintf(users[2].email, EMAIL_MAX, "carole@mail.com");
    users[3].id = 4; snprintf(users[3].email, EMAIL_MAX, "david@mail.com");
    users[4].id = 5; snprintf(users[4].email, EMAIL_MAX, "eve@mail.com");

    // --- Tests annuaire vide --- //
    printf("--- ANNUAIRES VIDES ---\n");
    verifier("Recherche vide - séquentiel", seq_search("alice@mail.com"), false);
    verifier("Recherche vide - hachage", hash_search("alice@mail.com"), false);

    // --- Insertion --- //
    for (int i = 0; i < 5; i++)
    {
        seq_insert(users[i].email, users[i].id);
        hash_insert(users[i].email, users[i].id);
    }

    // --- Tests recherche après insertion --- //
    printf("\n--- RECHERCHE DES 5 UTILISATEURS ---\n");
    for (int i = 0; i < 5; i++)
    {
        char titre[EMAIL_MAX + 20];

        snprintf(titre, sizeof(titre), "%s - séquentiel", users[i].email);

        verifier(titre, seq_search(users[i].email), true);

        snprintf(titre, sizeof(titre), "%s - hachage", users[i].email);

        verifier(titre, hash_search(users[i].email), true);
    }

    // --- Tests adresses absentes --- //
    printf("\n--- ADRESSES ABSENTES ---\n");

    verifier("bibi@mail.com - séquentiel", seq_search("bibi@mail.com"), false);
    verifier("bibi@mail.com - hachage", hash_search("bibi@mail.com"), false);
    verifier("bob2@mail.com - séquentiel", seq_search("bili@mail.com"), false);
    verifier("bob2@mail.com - hachage", hash_search("bili@mail.com"), false);

    // --- Tests casse --- //
    printf("\n--- TEST DE LA CASSE ---\n");

    verifier("Alice@mail.com - séquentiel", seq_search("Alice@mail.com"), false);
    verifier("Alice@mail.com - hachage", hash_search("Alice@mail.com"), false);

    // --- Resultat final --- //
    printf("\n--- RESULTAT FINAL ---\n");
    printf("Tests réussis : %d\n", nb_ok);
    printf("Tests échoués : %d\n", nb_echec);

    seq_free();
    hash_free();

    if (nb_echec == 0)
        return 0;
    else
        return 1;
}