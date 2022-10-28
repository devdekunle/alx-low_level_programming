#include "main.h"
/**
*set_bit - change the value of a bit at an index to 1
*@n: pointer to n
*@index: index of bit to change
*Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);


}
