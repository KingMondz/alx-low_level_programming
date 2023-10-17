#include "main.h"

/**
* puts_half - our function to print half of what's there
* @str: our character variable to hold value to be halved
* Return: is void
*/
void puts_half(char *str)
{
int pointerPos = 0;
int halfValue;

while (str[pointerPos] != '\0')
{
pointerPos++;
}
if (pointerPos % 2 == 1)
{
halfValue = (pointerPos - 1) / 2;
halfValue++;
}
else
{
halfValue = pointerPos / 2;
}
for (; halfValue < pointerPos; halfValue++)
{
_putchar(str[halfValue]);
}
_putchar('\n');
}
