#include <stdio.h>
/**
 * main - Entry point
 * Discription:'print alphabets three'
 * Return: Always a zero
 */
int main(void)
{
	char numB = 'a';
	char mumB = 'A';

	while (numB <= 'z')
	{
		putchar(numB);
		mumB++;
	}
	while (mumB <= 'Z')
	{
		putchar(mumB);
		mumB++;
	}
	putchar('\n');
	return (0);
}
