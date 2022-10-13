#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - execute function on each member of an array
*@array: array to usea
*@size: size of the array
*@action: address of function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action != NULL && size != 48)
	{
		for (i = 0; i < size; i++)
			action(array[i]);

	}



}
