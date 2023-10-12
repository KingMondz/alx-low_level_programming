#include "main.h"

/**
*_isalpha - Starting point
*@c: what to be checked
*Desription:checks if character isalpha
*Return: 1 if c isalpha, 0 otherwise
*/
int _isalpha(int c)
{

if ((c < 'a' && c > 'z') || (c < 'A' && c > 'Z'))
	return (0);
else
	return (1);
}
