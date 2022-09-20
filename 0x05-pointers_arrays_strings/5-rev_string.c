#include "main.h"
/**
*rev_string - reverse a string
*@s: string to reverse
*Return: void
*/

void rev_string(char *s)
{
	int strLength, i, halfLength;
	char tmp;

	for (strLength = 0; s[strLength] != '\0'; strLength++)
	{
	}
	i = 0;

	halfLength = strLength / 2;

	while (halfLength--)
	{
		tmp = s[strLength - i - 1];
		s[strLength - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}

}

