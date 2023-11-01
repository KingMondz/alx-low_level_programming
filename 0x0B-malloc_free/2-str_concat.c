#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * str_concat - function that concatates two strings
 * @s1: firdt string
 * @s2: second string
 * Return: something
 */

char *str_concat(char *s1, char *s2)
{
	int incS1, incS2;
	char *string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (incS1 = 0; s1[incS1] != '\0'; incS1++)
	{
	}
	for (incS2 = 0; s2[incS2] != '\0'; incS2++)
	{
	}

	string = (char *)  malloc(((incS1 + incS2) + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);
	for (incS1 = 0; s1[incS1] != '\0'; incS1++)
	{
		string[incS1] = s1[incS1];
	}
	for (incS2 = 0; s2[incS2] != '\0'; incS2++)
	{
		string[incS1] = s2[incS2];
		incS1++;
	}
	return (string);

}
