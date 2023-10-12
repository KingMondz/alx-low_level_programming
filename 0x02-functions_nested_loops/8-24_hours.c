#include "main.h"

/**
*jack_bauer - fx
*runs whole day
*/

void jack_bauer(void)
{
int hr, mins;

hr = 0;

while (hr <= 23)
{
mins = 0;
while (mins <= 59)
{
_putchar((hr / 10) + '0');
_putchar((hr % 10) + '0');
_putchar(':');
_putchar((mins / 10) + '0');
_putchar((mins % 10) + '0');
_putchar('\n');
mins++;
}
hr++;
}
}
