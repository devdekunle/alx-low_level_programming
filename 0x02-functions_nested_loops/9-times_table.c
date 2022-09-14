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
			if (num >= 10)
			{
				putchar(num / 10 + '0');
				putchar(num % 10 + '0');

			}
			else
			{
				putchar(num + '0');
			}

			if (num != 81)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

}
