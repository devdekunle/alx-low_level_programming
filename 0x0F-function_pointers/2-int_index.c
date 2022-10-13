#include "function_pointers.h"
/**
*int_index - Return index of number
*@array: array to compare
*@size: size of array
*@cmp: pointer to address of function
*Return: index or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);

	}
	return (-1);
}
