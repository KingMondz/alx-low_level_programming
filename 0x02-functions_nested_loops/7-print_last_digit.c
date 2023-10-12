#include "main.h"

/**
*print_last_digit- Starting point
*@n: ndio kucheckiwa
*Desription: finging last digit
*Return: the last digit
*/

int print_last_digit(int n)
{
int rem;
if (n < 0)
{
n = -n;
}
rem = n % 10;
if (rem < 0)
{
rem = -rem;
}

return (rem);
}
