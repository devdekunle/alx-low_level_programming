#include "main.h"
/**
 *print_last_digit - print last  digit
 * @n: number to check last digit
 * Return: value
 */
int print_last_digit(int n)

{
	int value;

	if (n < 0)
	{
		value = -1 * (n % 10);
	}
	else
	{

	value = n % 10;
	}
	_putchar(value + '0');
	return (value);

}

