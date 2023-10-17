#include "main.h"

/**
* _strlen - our function
* @s: input value variable value
* Return: the length (longInt)
*/
int _strlen(char *s)
{
int longInt = 0;

while (*s != '\0')
{
longInt++;
s++;
}
return (longInt);
}
