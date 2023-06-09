#include "main.h"
/**
 * _strncat - concatenates two strings 
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: size to collect from source
 *
 * Return: updated destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int ii = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	while (src[ii] != 0 && ii < n)
	{
		dest[i] = src[ii];
		i++;
		ii++;
	}
	dest[i] = '\0';
	return (dest);
}
