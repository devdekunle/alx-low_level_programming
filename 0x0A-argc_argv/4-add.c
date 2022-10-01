#include <stdio.h>
#include <stdlib.h>

/**
*checkInteger - check if string is an integer
*@s: string to check
*Return: 0 or 1
*/
int checkInteger(char *s)
{
	for (int i = 0; *(s + i); i++)
	{
		/*check that string is not a digit*/
		if (*(s + i) < 48 || *(s + i) > 57)
			return (1);
	}

return (0);
}
/**
* main - Entry point
*@argc: number of input
*@argv: pointer to array of pointer to strings
*Return: 1 or 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	while (--argc)
	{
		/*call function to check if inputs from command line is not digit*/
		if (checkInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);

		}
		else
			sum += atoi(argv[argc]);


	}
	printf("%d\n", sum);
	return (0);
}

