#include "main.h"
#include <stdio.h>

/**
* print_diagsums - our fx
* @a: var1
* @size: it matters
* Return: a function that prints the sum of the
* two diagonals of a square matrix of integers.
*/

void print_diagsums(int *a, int size)
{
int pos, suma = 0, sumb = 0;

for (pos = 0; pos < size; pos++)
{
suma += a[pos];
a += size;
}

a -= size;

for (pos = 0; pos < size; pos++)
{
sumb += a[pos];
a -= size;
}

printf("%d, %d", suma, sumb);
putchar('\n');

}

