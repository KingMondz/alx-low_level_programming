#include "main.h"
#include <stdio.h>

/**
* *_strcpy - our function to print n elements of an array
* @dest: destination
* @src: source of data pointed at
* Return: is destination value
*/
char *_strcpy(char *dest, char *src)
{
int destPos;

for (destPos = 0; src[destPos] != '\0'; destPos++)
{
dest[destPos] = src[destPos];
}
dest[destPos++] = '\0';
return (dest);
}
