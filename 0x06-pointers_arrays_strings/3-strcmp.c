#include "main.h"
/**
*_strcmp - function to compare strings
*@s1: first string
*@s2: second string
*Return: flag
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *(s1 + i) || *(s2 + i); ++i) /*check for null byte*/
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}

	}
		return (0);

}
