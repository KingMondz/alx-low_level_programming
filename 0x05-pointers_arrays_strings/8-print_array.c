#include "main.h"
#include <stdio.h>

/**
* print_array - our function to print n elements of an array
* @a: pointer
* @n: number of elements os an array to be printed
* Return: is void
*/
void print_array(int *a, int n)
{
int pos;

for (pos = 0; pos < n; pos++)
{
if (pos != (n - 1))
{
printf("%d", a[pos]);
printf(", ");
}
else
{
printf("%d", a[pos]);
}
}
putchar('\n');
}
