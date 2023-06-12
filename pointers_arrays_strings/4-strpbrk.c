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
	int i = 0;
	int ii;

	while (s[i])
	{
		for (ii = 0; accept[ii]; ii++)
		{
			if (s[i] == accept[ii])
			{
				return(s);
			}
		}
		i++;
	}
	return ('\0');
}
