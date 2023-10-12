#include "main.h"

/**
*print_square - 8-print_square.c
*@size: the size of square
*Return: is not void
*/

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int width, height;

for (width = 0; width < size; width++)
{
for (height = 0; height < size; height++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
