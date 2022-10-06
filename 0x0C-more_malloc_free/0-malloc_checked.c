#include "main.h"
#include<stdlib.h>
/**
*malloc_checked - check malloc status
*@b: number of bytes size to allocate
*Return: 98
*/
void *malloc_checked(unsigned int b)
{
	void ptrMalloc;

	ptrMalloc = malloc(b);
	if (ptrMalloc == NULL)
		return (98);
	else
		return (ptrMalloc);


}
