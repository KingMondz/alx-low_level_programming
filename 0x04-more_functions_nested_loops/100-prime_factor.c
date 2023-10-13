#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 *main - It all starts here
 *Return: a zeroo
 *
 */

int main(void)
{
long int num, maxNum, j;

num = 612852475143;
maxNum = -1;

while (num % 2 == 0)
{
maxNum = 2;
num /= 2;
}
for (j = 3; j <= sqrt(num); j = j + 2)
{
while (num % j == 0)
{
maxNum = j;
num = num / j;
}
}
if (num > 2)
{
maxNum = num;
}
printf("%ld", maxNum);

return (0);
}
