#include"main.h"
/**
*puts_half - print half of a string
*@str: string to print half
*Return: void
*/

void puts_half(char *str)
{
	int count;

	for (count = 0; str[count]  != '\0'; count++)
	{

	}

	 count++;
	for (count /= 2; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');

}
