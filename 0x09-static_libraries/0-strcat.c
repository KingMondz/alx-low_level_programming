#include "main.h"

/**
*_strcat - our fx
* @dest: var1
* @src: var2
* Return: dest concacted
*/
char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;
b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
