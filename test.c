#include <stdio.h>
#include "annuaire.h"

int main(void)
{
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

    seq_free();

    printf("Empty : %s\n",
        seq_search("test@mail.com") ? "Found" : "Not found");

    return 0;
}