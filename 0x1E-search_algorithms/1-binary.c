#include "search_algos.h"
/**
*binary_search - search for a value in a sorted array using binary search
*@array: array to search
*@size: size of the array to search
*@value: value to search for in the array
*Return: index of array of -1
**/

int binary_search(int *array, size_t size, int value)
{

	int low, high, index;


	if (value == '\0' || array == NULL)
		return (-1);
	/*set first and last index of array*/
	low = 0;
	high = size - 1;

	index = binary_recursion(array, value, low, high);

	return (index);


}
/**
*binary_recursion - finds a value in a sorted array using binary search
*@array: array to search
*@value: value to search for
*@low: start of the array and sub array
*@high: high of the array and sub array
*Return: -1 or index of the value
**/

int binary_recursion(int *array, int value, int low, int high)
{
	int mid, i;

	if (low > high)
		return (-1);
	printf("Searching in array: ");
	/*set i to current low of array and print the array being searched*/
	i = low;
	while (i <= high)
	{
		if (i != high)
			printf("%d, ", array[i]);

		else
			printf("%d\n", array[i]);

		i++;
	}
	/*get mid value of array*/
	mid = (low + high) / 2;

	if (value == array[mid])
		return (mid);
	else if (value < array[mid])
		/*recurse with new high as index before the mid index(new sub array)*/
		return (binary_recursion(array, value, low, mid - 1));
		/*recurse with new low set as next index after mid value*/
	return (binary_recursion(array, value, mid + 1, high));

}
