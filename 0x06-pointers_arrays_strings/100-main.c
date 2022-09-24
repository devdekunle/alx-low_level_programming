#include <stdio.h>
#include "main.h"
int main()
{
	char testString[]= "This is just to test the rot13 encoding!";
	
	char *result;

	result = rot13(testString);
	printf("%s\n", result);
	return (0);

}
