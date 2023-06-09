#include "main.h"
/**
 * _strcat - combine 2 strings
 * @dest: destination string
 * @src: source string to be added to destination string
 *
 * Return: updated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int ii = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	while (src[ii] != 0)
	{
		dest[i] = src[ii];
		i++;
		ii++;
	}
	dest[i] = '\0';
	return (dest);
}
