#include "main.h"

/**
*print_alphabet_x10 - Starting point
*Desription: outputs alphabet in lower case
*Return: Issa zero
*/
void print_alphabet_x10(void)
{

char c;
int num;

for (num = 0; num < 10; num++)
{
	for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
_putchar('\n');
}

}
