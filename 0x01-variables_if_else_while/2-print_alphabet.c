#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)

{
	int x  = 'a';
	int newLine = '\n';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}putchar(newLine);
	return (0);
}
