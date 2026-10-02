#include <stdio.h>
#include "annuaire.h"

int main(void)
{
    // --- Test de l'annuaire séquentiel --- //
    printf(" --- RECHERCHE ANNUAIRE SEQUENTIELLE --- \n");
    User users[5];
    for (int i = 0; i < 5; i++)
    {
        users[i].id = i + 1;
        snprintf(users[i].email, EMAIL_MAX, "user%d@mail.com", i + 1);
        seq_insert(users[i].email, users[i].id);
    }

    printf("%s : %s\n",
           users[0].email,
           seq_search(users[0].email) ? "Found" : "Not found");

    printf("%s : %s\n",
           users[1].email,
           seq_search(users[1].email) ? "Found" : "Not found");

    printf("%s : %s\n",
           users[2].email,
           seq_search(users[2].email) ? "Found" : "Not found");

    printf("%s : %s\n",
           "bibi@mail.com",
           seq_search("bibi@mail.com") ? "Found" : "Not found");

    printf("%s : %s\n",
           "bob@mail.com",
           seq_search("bob@mail.com") ? "Found" : "Not found");

    // --- Test de hachage --- //
    printf(" --- TEST HACHAGE --- \n");
    const char *emails[] = {
        "alice@mail.com",
        "bob@mail.com",
        "carole@mail.com",
        "david@mail.com",
        "eve@mail.com"
    };

    for (int i = 0; i < 5; i++)
    {
        unsigned long indice = hachage(emails[i]);
        printf("%s : %lu\n", emails[i], indice);
    }

    unsigned long indice = hachage(emails[0]);
    printf("%s : %lu\n", emails[0], indice);

    indice = hachage(emails[0]);
    printf("%s : %lu\n", emails[0], indice);

    indice = hachage("user1@mail.com");
    printf("%s : %lu\n", "user1@mail.com", indice);

    indice = hachage("user2@mail.com");
    printf("%s : %lu\n", "user2@mail.com", indice);

    // --- Test insertion et recherche hachage --- //
    printf(" --- TEST INSERTION ET RECHERCHE HACHAGE --- \n");

    for (int i = 0; i < 5; i++)
    {
        hash_insert(emails[i], i + 1);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s : %s\n",
               emails[i],
               hash_search(emails[i]) ? "Found" : "Not found");
    }

    printf("%s : %s\n",
           "bibi@mail.com",
           hash_search("bibi@mail.com") ? "Found" : "Not found");

    printf("%s : %s\n",
           "bob2@mail.com",
           hash_search("bob2@mail.com") ? "Found" : "Not found");

    seq_free();
    hash_free();

    // --- Test annuaire vide --- //
    printf(" --- TEST ANNUAIRE VIDE --- \n");
    printf("Sequentiel, annuaire vide : %s\n", seq_search("test@mail.com") ? "Found" : "Not found");
    printf("Hachage, annuaire vide : %s\n", hash_search("test@mail.com") ? "Found" : "Not found");

    return 0;
}