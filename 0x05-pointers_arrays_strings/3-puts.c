#include "main.h"

/**
* _puts - our function
* @stringVal: our character var
* Return: is void
*/
void _puts(char *stringVal)
{
while (*stringVal != '\0')
{
_putchar(*stringVal++);
}
_putchar('\n');
}
