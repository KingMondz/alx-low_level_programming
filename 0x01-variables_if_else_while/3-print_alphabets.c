#include <stdio.h>
/**
 * main - Entry point
 * Discription:'print alphabets three'
 * Return: Always a zero
 */
int main(void)
{
	int numB = 34;
	int mumB = 78;

	while (numB <= 122)
	{
		putchar(numB);
		mumB++;
	}
	while (mumB <= 90)
	{
		putchar(mumB);
		mumB++;
	}
	putchar('\n');
	return (0);
}
