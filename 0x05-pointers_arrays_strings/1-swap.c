#include "main.h"
/**
* swap_int - exchange values of two numbers
*@a: first pointer
*@b: second pointer
*Return: void
*/

void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;

}
