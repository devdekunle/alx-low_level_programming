#include "main.h"
/**
 * times_table - create multiplication table
 *
 */
void times_table(void)

{
	int i;

	int j;

	int num;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
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
				_putchar(' ');
				_putchar(num + '0');
			}

			if ( j< 9)
			{
				_putchar(',');
				_putchar(' ');

			}

			j++;
		}
		_putchar('\n');
		i++;
	}


}
