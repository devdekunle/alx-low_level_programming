#include "main.h"
/**
*_puts - print string
*@str: string to sprint
*Return:void
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');

}
