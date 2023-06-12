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

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
