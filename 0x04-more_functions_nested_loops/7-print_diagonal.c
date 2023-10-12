#include "main.h"

/**
 *print_diagonal - Prints a diagonal line
 *@n: determines how long we draw the line
 *Return: is void
 */

void print_diagonal(int n)
{

if (n <= 0)
{
	_putchar('\n');
}
else
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			if (a == b)
			{
				_putchar('\\');
			}
			else if (b < a)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

}
