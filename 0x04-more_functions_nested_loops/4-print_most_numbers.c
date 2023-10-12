#include "main.h"

/**
*print_most_numbers - prints 0 to 9 except 2 and 4
*Return: is void
*/

void print_most_numbers(void)
{
	char incr;

	for (incr = 48; incr < 58; incr++)
	{
		if ((incr == 50) || (incr == 52))
		{
			continue;
		}
		else
		{
			_putchar(incr);
		}
	}
	_putchar('\n');
}
