#include "main.h"

/**
* puts2 - our function to print in reverse
* @stringVal: our character variable
* Return: is void
*/
void puts2(char *stringVal)
{
int longInt = 0;
int replacerVar = 0;
char *pointer = stringVal;
int other;

while (*pointer != '\0')
{
pointer++;
longInt++;
}
replacerVar = longInt--;
for (other = 0; other <= replacerVar; other++)
{
if (other % 2 == 0)
{
_putchar(stringVal[other]);
}
}
_putchar('\n');
}
