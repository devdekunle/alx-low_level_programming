#include "main.h"
#include "2-strlen.c"
/**
*binary_to_uint - convert binary to unsigned int
*@b: string of binary numbers to convert
*Return: number
*/

unsigned int binary_to_uint(const char *b)
{
	int len = _strlen(b);
	int num = 0;
	int i, decVal = 1;

	if (b == NULL)
		return (0);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		if (b[i] == 49)
			num += decVal;
		decVal *= 2;

	}
	return (num);


}
