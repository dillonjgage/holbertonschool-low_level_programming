#include "main.h"
/**
 * _strspn - determins the length of a prefix substring
 * @s: intial string
 * @accept: acceptable bytes to match from the initial string
 *
 * Return: byte size of match
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i])
	{
		int ii = 0;

		while (accept[ii] > '\0')
		{
			if (s[i] == accept[ii])
			{
				i++;
			}
			else
			{
				ii++;
			}
		}
	}
	return (s[i] + '0');
}
