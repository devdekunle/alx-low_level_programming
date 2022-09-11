#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)

{
	int x, y;
	int newLine = '\n';

	x = 0;
	while (x <= 99)
	{
		y = 0;
		while (y <= 99)
		{
			if (y > x)
			{
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');
				putchar(' ');
				putchar(y / 10 + '0');
				putchar(y % 10 + '0');

				if (x * 100 + y != 9899)
				{
					putchar(',');
					putchar(' ');
				}

			}
			y++;
		}
	x++;
	}
	putchar(newLine);
	return (0);

}
