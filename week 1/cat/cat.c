#include "../cs50.h"
#include <stdio.h>

void meow(int times);

int main(void)
{
    int n;
    do 
    {
        n = get_int("What's n ? ");
    } while (n < 0);
    meow(n);
}

void meow(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("meow! (%i)\n", i + 1);
    }
}