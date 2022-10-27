#include "main.h"
#include "2-strlen.c"
/**
*binary_to_unit - convert binary to unsigned int
*@b: string of binary numbers to convert
*Return: number
*/

unsigned int binary_to_unit(const char *b)
{
	int len = _strlen(b);
	int num = 0;
	int i, decVal = 1;

	if (b == NULL || b[i] != 0 || b[i] != 1 || b[i] < 0)
		return (0);
	for (i = len - 1; i >= 0; i++)
	{
		if (b[i] == 1)
			num += decVal;
		decVal *= 2;

	}
	return (num);


}
