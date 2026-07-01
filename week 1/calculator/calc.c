#include "../cs50.h"
#include <stdio.h>

double calc(double fn, char op, double sn);

int main() 
{
    int fn = get_int("Enter first number: ");
    char op = get_char("Enter operator: ");
    int sn = get_int("Enter second number: ");

    fn = (double)fn;
    sn = (double)sn;
    double result = calc(fn, op, sn);
    printf("%i %c %i = %f\n", fn, op, sn, result);
}

double calc(double fn, char op, double sn)
{
    double result;
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