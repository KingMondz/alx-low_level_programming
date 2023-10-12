#include "main.h"

/**
*_islower - Starting point
*@c: what to be checked
*Desription:checks if character is lower-case
*Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{

if ((c >= 'a') && (c <= 'z'))
	return (1);
else
	return (0);

}
