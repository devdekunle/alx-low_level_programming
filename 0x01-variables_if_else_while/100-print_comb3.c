#include<stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int num1, num2;
	int newLine = '\n';

	num1 = 0;
	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar('0' + num1);
				putchar('0' + num2);
				if (num1 + num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		num2++;

		}
	num1++;
	}
	putchar(newLine);
	return (0);



}
