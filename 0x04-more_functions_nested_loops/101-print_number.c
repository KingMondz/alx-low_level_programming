#include "main.h"
#include <stdio.h>

/**
*print_number - is the function name
*@n: the inteja to be printed
*
*/

void print_number(int n)

{
unsigned int num;

if (n < 0)
{
num = -n;
_putchar('-');
}
else
{
num = n;
}
if (num / 10)
{
print_number(num / 10);
}
_putchar((num % 10) + '0');
}
