/**
*_isdigit - Starting point
*@c: what to be checked
*Desription:checks if character is a digit
*Return: 1 if c is digit, 0 otherwise
*/
int _isdigit(int c)
{

if ((c >= '0') && (c <= '9'))
	return (1);
else
	return (0);

}
