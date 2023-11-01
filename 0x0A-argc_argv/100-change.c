#include <stdio.h>
#include <stdlib.h>

/**
 * main - give minimum amount of coins to make change for a given quantity
 * @argc: arg_quantirry
 * @argv: arg_value
 * Return: zzzzzzzzzzzzzzzero
 */

int main(int argc, char **argv)
{
	int totol, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	totol = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (totol > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (totol >= cents[i])
				{
					count += totol / cents[i];
					totol = totol % cents[i];
				}
			}
		}
		if (totol == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}
