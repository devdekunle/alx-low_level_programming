#include "main.h"
/**
*_strstr - locate  substring within a string
*@needle: string to locate
*@haystack: string to check for substring
*Return: needle
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
			{

				break;
			}

		}
		if (needle[j - i] == '\0')
			return (haystack + i);

	}


	return (0);
}
