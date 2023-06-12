#include "main.h"
/**
 * _memcpy - copies a specific memory area of src to dest
 * @dest: pointer to destination string
 * @src: pointer to source to be copied
 * @n: unsigned int n for specific memory area
 *
 * Return: dest - updated string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
