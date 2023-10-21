/**
* rot13 - our fx
* @n: var1
* Return: rot13(n)
*/
char *rot13(char *n)
{
int a, b;
char chars1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char chars2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopwrstuvwxyzabcdefghijklm";

for (a = 0; n[a] != '\0'; a++)
{
for (b = 0; b < 52; b++)
{
if (n[a] == chars1[b])
{
n[a] = chars2[b];
break;
}
}
}
return (n);
}
