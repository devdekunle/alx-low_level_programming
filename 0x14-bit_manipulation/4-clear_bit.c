#include "main.h"
/**
*clear_bit - unset a bit to 0
*@n: address of number to set
*@index: index of bit to unset
*Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);



}
