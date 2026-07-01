#include "../cs50.h"
#include <stdio.h>

int calc(int fn, int op, int sn);

int main() 
{
    int fn = get_int("Enter first number: ");
    int op = get_char("Enter operator: ");
    int sn = get_int("Enter second number: ");

    int result = calc(fn, op, sn);
    printf("%i %c %i = %i\n", fn, op, sn, result);
}

int calc(int fn, int op, int sn)
{
    int result;
    if (op == '+')
    {
        result = fn + sn;
    }
    else if (op == '-')
    {
        result = fn - sn;
    }
    else if (op == '*')
    {
        result = fn * sn;
    }
    else if (op == '/')
    {
        result = fn / sn;
    }
    return result;
}