#include<stdio.h>
/**
 * main - Entry point
 * Return:Always 0 (Success)
 */
int main(void)

{
	int num = 0;

	int newLine = '\n';

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar(newLine);
	return (0);
}
