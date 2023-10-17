#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* main - my function
* Return: is zerooo..Zerooo
*/

int main(void)
{

	int sum;
	char j;

	srand(time(NULL));
	while (sum <= 2645)
	{
		j = rand() % 128;
		sum += j;
		putchar(j);
	}
	putchar(2772 - sum);
	return (0);

}
