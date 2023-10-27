#include "main.h"

/**
* _memcpy - our fx
* @dest: var1
* @src: var2
* @n: var3
* Return: Returns a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
