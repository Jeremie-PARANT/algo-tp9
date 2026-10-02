#include <stdio.h>
#include "annuaire.h"

int main(void)
{
    const char *emails[] = {
        "alice@mail.com",
        "bob@mail.com",
        "carole@mail.com",
        "david@mail.com",
        "eve@mail.com"
    };

    for (int i = 0; i < 5; i++)
    {
        int indice = hachage(emails[i]);
        printf("%s : %d\n", emails[i], indice);
    }

    int indice = hachage(emails[0]);
    printf("%s : %d\n", emails[0], indice);

    indice = hachage(emails[0]);
    printf("%s : %d\n", emails[0], indice);

    indice = hachage("user1@mail.com");
    printf("%s : %d\n", "user1@mail.com", indice);

    indice = hachage("user2@mail.com");
    printf("%s : %d\n", "user2@mail.com", indice);

    return 0;
}