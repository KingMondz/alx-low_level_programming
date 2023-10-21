#include "main.h"

/**
* reverse_array - our fx
* @a: var1
* @n: var2
* Return: paranoid in reverse (Void)
*/
void reverse_array(int *a, int n)
{
int b;
int c;

for (b = 0; b < n--; b++)
{
c = a[b];
a[b] = a[n];
a[n] = c;
}
}
