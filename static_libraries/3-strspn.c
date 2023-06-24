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
	unsigned int bytes = 0;
	int i;
	int ii = 0;

	while (s[ii])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[ii] == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}
		}
		ii++;
	}
	return (bytes);
}
