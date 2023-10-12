#include "main.h"

/**
*print_numbers - prints 0 to 9 then a new line
*Return: is void
*/

void print_numbers(void)
{
	char incr;

	for (incr = 48; incr < 58; incr++)
	{
		_putchar(incr);
	}
	_putchar('\n');
}
