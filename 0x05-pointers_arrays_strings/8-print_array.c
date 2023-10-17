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

for (pos = 0; pos < (n - 1); pos++)
{
printf("%d ", a[pos]);
}
if (pos == (n - 1))
{
printf("%d", a[pos - 1]);
}
putchar('\n');
}
