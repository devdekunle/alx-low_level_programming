#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
#include "0-strcat.c"
/**
*argtostr - concatenate strings in an array of pointers
*@ac: argument count
*@av: argument vector
*Return: pointer to concatenated string
*/
char *argtostr(int ac, char **av)
{
	int i, j, k, l, strLen = 0;
	char *stringPtr = NULL;

	if (ac == NULL || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		strLen += _strlen(av[i]);
	for (j = 0; j < ac; j++)
		for (k = 0; *(av + k); k++)
			*(av + _strlen((av[k]))) = '\n';
	stringPtr = malloc(sizeof(char) * (strLen + 1) + ac);


	if (stringPtr != NULL)
	{
		for (l = 0; l < ac; l++)
			stringPtr = str_concat(stringPtr, (av + l));

		return (stringPtr);
	}
	else
		return (NULL);
}
