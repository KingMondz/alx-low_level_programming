#include "main.h"

/**
* _strpbrk - our fx
* @s: var1
* @accept: var2
* Return: Returns a pointer to the byte in s that matches
* one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
int a;

while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a + 1])
{
return (s);
}
s++;
}
}
return ('\0');
}
