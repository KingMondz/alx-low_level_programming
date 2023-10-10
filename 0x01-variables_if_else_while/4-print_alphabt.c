#include <stdio.h>
/**
 * main - Entry point
 * Discription:'print alphabets qxcept Q & E'
 * Return: Always a zerooo
 */
int main(void)
{
	int numChar = 97;

	while (numChar <= 122)
	{
		if (numChar == 101 || numChar == 113)
		{
			numChar++;
			continue;
		}
		putchar('\n');
		numChar++;
	}
	putchar('\n');
	return (0);
}
