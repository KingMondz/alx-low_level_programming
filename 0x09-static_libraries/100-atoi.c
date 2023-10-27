#include "main.h"
#include <math.h>

/**
* _atoi - our function
* @s: our character
* Return: is destination value
*/
int _atoi(char *s)
{
int q = 0;
int w = 0;
int e = 0;
int r = 0;
int t = 0;
int y = 0;

while (s[r] != '\0')
{
r++;
}
while (q < r && t == 0)
{
if (s[q] == '-')
w++;
if (s[q] >= '0' && s[q] <= '9')
{
y = s[q] - '0';
if (w % 2)
y = -y;
e = e * 10 + y;
t = 1;
if (s[q + 1] < '0' || s[q + 1] > '9')
break;
t = 0;
}
q++;
}
if (t == 0)
return (0);

return (e);
}
