#include "main.h"
#include <stdlib.h>
/**
*create_array - create an array from malloc
*@size: size of memory to be allocated for array
*@c: character to be filled in array
*Return: NULL or pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 48)
		status = NULL;

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr != NULL)
	{
		for (i = 0; *(ptr + i) < size; i++)

			*(ptr + i) = c;
		status = ptr;
	}
	else
		status NULL;

	return (status);
}



