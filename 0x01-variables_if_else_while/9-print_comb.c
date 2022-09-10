#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)

{
	int num1 = 0;

	int newLine = '\n';

	while (num1 < 10)
	{
		putchar(48 + num1);

		if (num1 != 9)
		{
			putchar(',');
			putchar(' ');
		}
	num1++;
	}
	putchar(newLine);
	return (0);
}
