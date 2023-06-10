#include "main.h"
/**
 * string_toupper - checks for lowercase and sets to upper
 * @p: pointer to string being checked
 *
 * Return: p - updated string
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] = p[i] - 32;
		}
		i++;
	}
	return (p);
}
