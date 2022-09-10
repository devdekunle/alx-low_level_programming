#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *Return: 0
 */
int main(void)

{
	int x = 'a';

	int newLine = '\n';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	x++;
	}
	putchar(newLine);
	return (0);
}
