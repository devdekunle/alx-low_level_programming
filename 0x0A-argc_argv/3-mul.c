#include <stdio.h>
#include <stdlib.h>
/**
*main - entry
*@argc: number of arguements
*@argv: pointer
*Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int firstNum, secondNum, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	firstNum = atoi(argv[1]);
	secondNum = atoi(argv[2]);
	result = firstNum * secondNum;

	printf("%d\n", result);

	return (0);

}
