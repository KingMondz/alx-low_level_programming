#include "main.h"

/**
* _strspn - our fx
* @s: var1
* @accept: var2
* Return: Returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
int a;
unsigned int b = 0;

while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
{
b++;
break;
}
else if (accept[a + 1] == '\0')
{
return (b);
}
}
s++;
}

return (b);
}
