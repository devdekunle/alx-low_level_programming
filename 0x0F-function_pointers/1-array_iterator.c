#include "function_pointers.c"
#include <stdlib.h>
/**
* array_iterator - execute function on each member of an array
*@array: array to use
*@size: size of the array
*@action: address of function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (action != NULL || size != 48)
	{
		for (i = 0; i < size; i++)
			action(array[i]);

	}



}
