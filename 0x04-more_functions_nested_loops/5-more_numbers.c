#include "main.h"
/**
* more_numbers - print more numbrs
* Return: 0
*/

void more_numbers(void)
{
	int i;

	char num, num2;

	while (i <= 10)
	{
		num = 0;
		while (num <= 14)
		{
			num2 = num;

			if (num > 9)
			{
				_putchar('1');
				num2 = num % 10;
			}
		_putchar(num2 + '0');
		num++;
		}
		_putchar('\n');
		i++;
	}
}
