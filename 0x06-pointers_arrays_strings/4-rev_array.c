#include "main.h"
#include "2-strlen.c"
/**
*reverse_array - program to revers array
*@a: array to reverse
*@n: length of array
*Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, b;

	i = 0;

	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
