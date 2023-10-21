#include "main.h"

/**
*_strcat - our fx
* @dest: var1
* @src: var2
* @n: var3
* Return: dest concacted to n
*/
char *_strcat(char *dest, char *src, int n)
{
int a, b;

a = 0;
b = 0;
while (dest[a] != '\0')
{
a++;
}
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
