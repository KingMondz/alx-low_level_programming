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
		if (incr == 48 || incr == 49 || incr == 51 || incr == 53 || incr == 54 || incr == 55 || incr == 56 || incr == 57 || incr == 58)
		{
			_putchar(incr);
		}
	}
	_putchar('\n');
}
