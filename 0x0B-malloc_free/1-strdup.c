#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: tha string
 * Return: read _strdup
*/

char *_strdup(char *str)
{
	char *pointer;
	int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;
	pointer = (char *)  malloc((a + 1) * sizeof(char));

	if (pointer == NULL)
		return (NULL);

	for (b = 0; b < a ; b++)
		pointer[b] = str[b];

	pointer[a + 1] = '\0';
	return (pointer);
}
