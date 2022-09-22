#include "main.h"
/**
*_strcmp - function to compare strings
*@s1: first string
*@s2: second string
*Return: flag
*/

int _strcmp(char *s1, char *s2)
{
	int i, flag;

	for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) == *(s2 + i))
		{

			flag = 0;
			break;
		}
		else if (*(s1 + i) < *(s2 + i))
		{

			flag = -1;
			break;

		}
		else if (*(s1 + i) > *(s2 + i))
		{
			flag = 1;
			break;
		}
	}
		return (flag);

}
