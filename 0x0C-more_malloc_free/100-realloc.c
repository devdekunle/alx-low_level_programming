#include <stdlib.h>
#include "main.h"
/**
* _realloc - reallocates a memory block using malloc and free.
* @ptr: pointer to the memory previously allocated with a
* call to ``` malloc : malloc(old_size) ```.
* @old_size: size in bytes allocated for ptr.
* @new_size: size in bytes of new memory block.
*
* Return: pointer to new mem block, NULL or ptr.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *newPtr;
	unsigned int i;
	/*no change in size, previously allocated block stays same*/
	if (new_size == old_size)
		return (ptr);
	/*condition for realloc() to act as free() and return null after freeing*/
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);


	}
	/*condition for realloc() to act as malloc()*/
	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
			return (NULL);
	}
	/*condition to reallocate previously allocated memory block */
	if (new_size > old_size && (ptr != NULL))
	{

		newPtr = malloc(new_size);
		if (newPtr == NULL)
			/*if reallocation fails return nptr*/
			return (newPtr);
		for (i = 0; i < old_size; i++)
		/*typecasting done to enable dereferencing of void pointer */
			newPtr[i] = *((char *)ptr + 1);
		free(ptr);

	}
	/*return adrdress of newly reallocated memory block*/
	return (newPtr);
}
