#include "main.h"
/**
 * _strlen - determines the length of a string
 * @s: pointer holding the string in question
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
