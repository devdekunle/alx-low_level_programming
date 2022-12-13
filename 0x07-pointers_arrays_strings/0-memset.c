#include "main.h"
/**
* _memset - fill buffer with character
*@s: pointer to memory to be filled
*@b: constant to fill buffer
*@n: number of bytes to fill buffer
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (i = 0; i < n; i++)
	{

		*(s + i) = b;

	}
return (s);


}
