#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to destination
 * @b: the constant byte to be added
 * @n: the bytes of memory pointed to
 *
 * Return: s - updated string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
