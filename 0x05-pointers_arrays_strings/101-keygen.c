#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* main - my function
* Return: is zerooo..Zerooo
*/
int main(void)
{
int passuwad[101];
int incr, sum, num;

sum = 0;

srand(time(NULL));

for (incr = 0; incr <= 101; incr++)
{
passuwad[incr] = rand() % 19;
sum += (passuwad[incr] + '0');
putchar(passuwad[incr] + '0');

if ((3191 - sum) -'0' < 19)
{
num = 3191 - sum - '0';
sum += num;
putchar(num + '0');
break;
}
}
return (0);
}
