#include <stdio.h>

/**
 * main - Printing firstt argument
 * @argc: count
 * argv: commands
 * Return: zeroo
 */

int main(int argc, char  **argv)
{
	int incr;

	for (incr = 0; incr < argc; incr++)
		printf("%s\n", argv[incr]);

	return (0);
}
