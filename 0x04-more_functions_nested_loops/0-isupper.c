#include "main.h"

/**
*_isupper - Starting point
*@c: what to be checked
*Desription:checks if character is Upper-case
*Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{

if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);

}
