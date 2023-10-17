#include "main.h"

/**
* swap_int - our function
* @one: input value variable value
* @two: other input
* return: void int a and b
*/
void swap_int(int *one, int *two)
{
int newPoint;

newPoint = *one;
*one = *two;
*two = newPoint;

}
