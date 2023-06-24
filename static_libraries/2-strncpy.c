#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: destination of copied string
 * @src: source string to be copied
 * @n: index length to copy - a limit
 *
 * Return: updated dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int ii = 0;

	while (ii < n && src[ii] != '\0')
	{
		dest[i] = src[ii];
		i++;
		ii++;
	}
	if (src[ii] == '\0')
	{
		dest[i] = src[ii];
	}
	return (dest);
}
