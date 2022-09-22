#include<stdio.h>
#include "main.h"

int main()
{
	char grt1[] = "Hello";
	char grt2[] = "World";

	printf("%d\n", _strcmp(grt1, grt2));
	printf("%d\n", _strcmp(grt2, grt1));
	printf("%d\n", _strcmp(grt1, grt1));


	return (0);
}
