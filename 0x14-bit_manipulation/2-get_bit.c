#include "main.h"
/**
*get_bit - get the value of a bit at an index
*@n: decimal check
*@index:index of value to return
*Return: index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	/*shift numbers to the right by amount of index*/
	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);



}
