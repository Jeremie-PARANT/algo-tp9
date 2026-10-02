#include <stdio.h>
#include "annuaire.h"

int main(void)
{
    User user;
    
    user.id = 1;
    snprintf(user.email, EMAIL_MAX, "user@example.com");
    
    printf("ID: %d\n", user.id);
    printf("Email: %s\n", user.email);

    return 0;
}