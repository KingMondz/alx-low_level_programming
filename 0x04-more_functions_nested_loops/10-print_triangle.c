#include "main.h"

/**
 *print_triangle - about to print a dzam triangle man
 *@size: this gonna be the size of the triangle mahn
 *Return: I donno man
 */

void print_triangle(int size)
{

if (size <= 0)
{
_putchar('\n');
}
else
{
int height, base;

for (height = 1; height <= size; height++)
{
for (base = height; base < size; base++)
{
_putchar(' ');
}
for (base = 1; base <= height; base++)
{
_putchar('#');
}
_putchar('\n');
}
}

}
