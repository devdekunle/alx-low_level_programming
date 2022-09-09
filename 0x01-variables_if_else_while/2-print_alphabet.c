#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)

{
	int x  = 'A';

	int lower_case;

	while (x <= 'Z')
	{
		lower_case = tolower(x);
		putchar(lower_case);
		x++;
	}
	return (0);
}
