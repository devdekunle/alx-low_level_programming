#include "main.h"
/**
 *print_sign - prints the sign of a number
 *@n: check the sign of a number
 *Return: 1, 0 or -1
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		_putchar('+');
		test = 1;
	}
	else if (n == 0)
	{

		_putchar('0');
		test = 0;
	}
	else
	{
		_putchar('-');
		test = -1;
	}
	return (test);
}
