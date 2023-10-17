#include "main.h"

/**
* print_rev - our function to print in reverse
* @stringVal: our character variable
* Return: is void
* *Here I reverse tha pointer order in the while loop
*/
void print_rev(char *stringVal)
{
int longInt = 0;
int other;

while (*stringVal != '\0')
{
longInt++;
stringVal++;
}
stringVal--;
for (other = longInt; other > 0; other--)
{
_putchar(*stringVal);
stringVal--;
}
_putchar('\n');
}
