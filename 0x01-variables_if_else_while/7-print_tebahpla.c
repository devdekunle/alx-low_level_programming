#include<stdio.h>
/**
 * main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)

{
	int start = 'z';

	int end = 'a';

	int newLine = '\n';

	while  (start >= end)
	{
		putchar(start);
		start--;
	}
	putchar (newLine);
	return (0);
}
