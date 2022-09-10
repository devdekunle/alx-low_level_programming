#include <stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *Return: 0
 */
int main(void)

{
	int num1, num2, num3;

	int newLine = '\n';

	num1 = 0;
	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			num3 = 0;

			while (num3 <= 9)
			{


				if ((num1 != num2 && num2 != num3) && (num1 < num2 && num2 < num3))
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');

					if (num1 + num2 + num3 != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}

			num2++;
		}

		num1++;
	}
	putchar(newLine);
	return (0);
}
