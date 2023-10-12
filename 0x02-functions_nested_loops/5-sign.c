#include "main.h"

/**
*print_sign - Starting point
*@n: ndio kucheckiwa
*Desription: outputs alphabet in lower case
*Return: Issa zero
*/
int print_sign(int n)
{


if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}

}
