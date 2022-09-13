#include "main.h"
/**
 * main - check the code
 *
 * Return:Always 0
 */
int main(void)

{
	char bgn = 'a';

	char lstn = 'z';

	int i = 0;
	while (bgn <= lstn)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);

}
