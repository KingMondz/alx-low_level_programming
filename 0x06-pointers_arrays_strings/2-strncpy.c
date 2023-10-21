#include "main.h"

/**
*_strcat - our fx
* @dest: var1
* @src: var2
* @n: var3
* Return: dest which is copy of src
*/
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;


while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (a < n')
{
dest[a] = '\0';
a++;
}
return (dest);
}
