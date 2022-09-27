#include "main.h"
/**
*_strchr - locate a character in a  string
*@s: string to search
*@c: character to locate
*Return: c or NULL
*/
char *_strchr(char *s, char c)
{
	int i;
	/*loop through pointer to s*/
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)

		return (s + i);

	}

	if (*(s == c)
		return (s);


	return (0);
}
