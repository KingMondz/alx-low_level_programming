#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars,
 * initializes it with a specific char
 * @size: array size
 * @c: array val
 * Return: pointer to array or NULL, it depends
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;

	return (array);
}
