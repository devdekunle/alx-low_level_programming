#include "main.h"
#include "_putchar.c"
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

		if (i % 10)
			_putchar(' ');
		if (!(i % 10) && i)
			_putchar('\n');
		*(s + i) = b;
		_putchar(*(s + i));

	}
	_putchar('\n');
return (s);


}
