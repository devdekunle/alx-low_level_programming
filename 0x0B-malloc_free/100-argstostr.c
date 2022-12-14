#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
/**
*argstostr - concatenate strings in an array of pointers
*@ac: argument count
*@av: argument vector
*Return: pointer to concatenated string
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, strLen = 0;
	int l = 0;
	char *stringPtr = NULL;

	if (ac == '\0')
		return (NULL);
	if (av == NULL)
		return (NULL);
		/*get total length od strings in pointer array*/
	for (i = 0; i < ac; i++)
	{
		strLen += _strlen(av[i]);
	}
	/*allocate memory block based on string length*/
	stringPtr = malloc(sizeof(char) * (strLen + 1) + ac);


	if (stringPtr != NULL)
	{
		/*copy all characters from each array to stringPtr*/
		for (j = 0; j < ac; j++)
		{
			for (k = 0; av[j][k]; k++)
			{
				stringPtr[l] = av[j][k];
				l++;
			}
			stringPtr[l] = '\n';
			l++;
		}

		return (stringPtr);
	}
	else
		return (NULL);
}
