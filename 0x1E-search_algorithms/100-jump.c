#include "search_algos.h"
#include <math.h>
/**
*jump_search - find a value in a sorted array using jump search method
*@array: array to search
*@size: size of the array
*@value: value to search for
*Return: -1 or index of the first instance of the value
*/
int jump_search(int *array, size_t size, int value)
{
	int index, block, increment, prev;

	if (array == NULL || size == 0)
		return (-1);

	block = (int)sqrt((double)size);
	increment = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		increment++;
		prev = index;
		index = increment * block;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
