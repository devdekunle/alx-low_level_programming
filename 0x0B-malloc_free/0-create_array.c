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
	unsigned int i;

	if (size == 0)
		return (NULL);
	/*allocate memory for requested size*/
	ptr = (char *)malloc(size * sizeof(char));
	/*if memory is sucessfully allocated, fill memory with c*/
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)

			*(ptr + i) = c;
	/*return pointer to the first byte of the memory location*/
		return (ptr);
	}
	/*if memory is not allocated*/
	else
		return (NULL);


}
