#include "main.h"
/**
*print_binary - convert to binary
*@n: number to convert
*Return: nothing
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{	_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n > 0)
		print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');

}
