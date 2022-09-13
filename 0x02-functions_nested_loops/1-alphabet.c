#include "main.h"
/**
 * main - check the code
 *
 * Return:Always 0
 */
int main(void)

{
	char letter = 'a';

	int i = 0;
	while (letter <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);

}
