#include "main.h"
/**
*rot13 - rotate string according to ceaser cipher
*@str: string to encode
*Return: str
*/

char *rot13(char *str)
{
	int i;
	/*iterate through string and also check if character is an alphabet*/
	for (i = 0; str[i]; ++i)
	{

		for (i = 0; (str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'); ++i)
		{

			/*check if character is between first 13 characters*/
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			{

				/*add 13 to get the character 13 places after it*/
				str[i] += 13;


			}
			else
			{
				/*if not, subtract 13 to get the character 13 places befor it*/
				str[i] -= 13;
			}

		}
	}

		return (str);
}
