#include "main.h"
/**
 * _strchr - locates the first occurance of a char in a string
 * @s: pointer to main string to traverse
 * @c: desired character to locate
 *
 * Return: s if found or NULL if nonexistant
 */
char *_strchr(char *s, char c)
{
	int i;
	char found[98];
	int ii = 0;

	for (i = 0; s[i] <= c; i++)
	{
		if (s[i] == c)
		{
			while (s[i] < '\0')
			{
				found[ii] = s[i];
				i++;
				ii++;
			}
		}
		if (s[i] == '\0')
		{
			break;
		}
	}
	if (found[ii] == s[i])
	{
		s = found;
	}
	else
	{
		s = '\0';
	}
	return (s);
}
