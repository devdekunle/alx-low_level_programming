#include "search_algos.h"
/**
*linear_search - function a find a value using linear search algorithm
*@array: array to search
*@size: size of the array
*@value: value to search for
* Return: index of element or -1
**/

int linear_search(int *array, size_t size, int value)
{

	int ret = 0;
	size_t i;

	if (value == '\0' || array == NULL)
	{
		ret = -1;
	}
	else
	{
		i = 0;
		while (i < size)
		{

			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				ret = i;
				break;

			}
			else
			{
				ret = -1;

			}
			i++;

		}
	}
	return (ret);
}
