#include "main.h"
/**
*get_endianness - check for endianess
*Return: 0 or 1
*/
int get_endianness(void)
{
	int i = 12;
	char *c;

	c = (char *)&i;

	if (*c)
		return (1);
	return (0);


}
