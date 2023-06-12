#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: source string to be evaluated
 * @accept: set of specific bytes for matching
 *
 * Return: s - updated string of matching bytes only
 */
char *_strpbrk(char *s, char *accept)
{
	char tmp[98];
	int i = 0;
	int ii;
	int iii = 0;

	while (s[i] > '\0')
	{
		for (ii = 0; accept[ii] > '\0'; ii++)
		{
			if (s[i] == accept[ii])
			{
				tmp[iii] = s[i];
				iii++;
				break;
			}
		}
		i++;
	}
	s = tmp;
	return (s);
}
