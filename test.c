#include <stdio.h>
#include "annuaire.h"

int main(void)
{
    User users[40];

    for (int i = 0; i < 40; i++)
    {
        users[i].id = i + 1;
        snprintf(users[i].email, EMAIL_MAX, "user%d@mail.com", i + 1);
        seq_insert(users[i].email, users[i].id);
    }

    seq_free();
    return 0;
}