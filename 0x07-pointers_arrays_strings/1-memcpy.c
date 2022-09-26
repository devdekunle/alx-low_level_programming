#include "main.h"
/**
*_memcpy - copy memory to another location
*@src: memory to copy from
*@dest: memory to copy to
*@n: number of bytes to copy
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;

	}
	

	return (dest);

}
