#include "main.h"

/**
* leet - our fx
* @n: var1
* Return: mozart tunes(n)
*/
char *leet(char *n)
{
int a, b;
char c1[] = "aAeEoOtTlL";
char c2[] = "4433007711";

for (a = 0; n[a] != '\0'; a++)
{
for (b = 0; b < 10; b++)
{
if (n[a] == c1[b])
{
n[a] = c2[b];
}
}
}
return (n);
}
