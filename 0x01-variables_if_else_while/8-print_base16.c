#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)

{
	int num  = 0;

	int y = 'a';
	int newLine = '\n';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar(newLine);
	return (0);
}
