#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)

{
	int num = 0;

	int newLine = '\n';

	while (num < 10)
	{
		putchar(48 +  num);
		num++;
	}
	putchar (newLine);
	return (0);
}
