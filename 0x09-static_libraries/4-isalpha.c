#include "main.h"

/**
*_isalpha - Starting point
*@c: what to be checked
*Desription:checks if character isalpha
*Return: 1 if c isalpha, 0 otherwise
*/
int _isalpha(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);

}
