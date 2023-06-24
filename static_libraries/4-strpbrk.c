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
	int ii;

	while (*s)
	{
		for (ii = 0; accept[ii]; ii++)
		{
			if (*s == accept[ii])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
