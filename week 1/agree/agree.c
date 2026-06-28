#include "../cs50.h"
#include <stdio.h>

int main(void)
{
    char agree = get_char("Do you agree ? ");
    if (agree == 'y' || agree == 'Y')
    {
        printf("You Agreed!");
    }
    else
    {
        printf("You Not Agreed!");
    }
}