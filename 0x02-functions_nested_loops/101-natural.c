#include "main.h"
#include <stdio.h>
/**
 * print_natural -  to print multiples multiples of 3 and 5
 *
 */
void print_natural(void)
{
	int i, sum;

	i = sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)

			sum += i;


	i++;

	}
	printf("%d\n", sum);

}
