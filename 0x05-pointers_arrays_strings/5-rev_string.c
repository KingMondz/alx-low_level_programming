#include "main.h"

/**
* rev_string - our function to print in reverse
* @stringVal: our character variable
* Return: is void
*/
void rev_string(char *stringVal)
{
char reversePointer = stringVal[0];
int counter = 0;
int replacerVar;

while (stringVal[counter] != '\0')
counter++;
for (replacerVar = 0; replacerVar < counter; replacerVar++)
{
counter--;
reversePointer = stringVal[replacerVar];
stringVal[replacerVar] = stringVal[counter];
stringVal[counter] = reversePointer;
}
}
