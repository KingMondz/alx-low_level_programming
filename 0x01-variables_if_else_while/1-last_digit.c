#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Discription:'last digit if >five, or a zero or leass than six'
 *Return: alwayz a zeroo
 */
int main(void)
{
	int n;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastD = n % 10;
	if (lastD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastD);
	}
	else if (lastD == 0)
	{
		printf("Last digit of %d is %d and is a 0", n, lastD);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0", n, lastD);
	}
	return (0);
}
