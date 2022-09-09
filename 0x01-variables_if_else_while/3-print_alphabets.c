#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)

{
	int lowerCase = 'a';
	int newLine = '\n';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}

	int upperCase = 'A';

	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}
	putchar(newLine);
	return (0);
}
