#include "main.h"

/**
* _memset - our fx
* @b: var1
* @s: var2
* @n: var3
* Return: ..s a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
