#include "main.h"
/**
*print_rev - reverse order of string
*@s: string to reverse order
*Return: void
*/
void print_rev(char *s)
{
	int i;
	int nullChar = '\0';

	for (i = nullChar; i > s[0]; i--)
	{
		_putchar(s[i]);

	}


}
