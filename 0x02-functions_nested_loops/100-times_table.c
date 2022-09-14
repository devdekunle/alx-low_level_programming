#include "main.h"
/**
 * print_times_table - print multiplication tables
 * @n: number of times table
 */

void print_times_table(int n)
{
	int i, j, num;

	for  (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (n > 15 || n < 0)
			{
				_putchar('');

			}
			num = i * j;

			if (j == 0)
			{
				_putchar(num + '0');

			}
			else if (num >= 10)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			else
			{	_putchar(' ');
				_putchar(num + '0');

			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');

			}


		}
		_putchar('\n');
	}

}
