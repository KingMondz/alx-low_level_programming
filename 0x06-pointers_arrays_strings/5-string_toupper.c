#include "main.h"

/**
* string_toupper - our fx
* @n: var2
* Return: ALways look up (n)
*/
char *string_toupper(char *n)
{
int a = 0;

while (n[a] != '\0')
{
if (n[a] >= 'a' && n[a] <= 'z')
{
n[a] = n[a] - 32;
}
a++;
}
return (n);
}
