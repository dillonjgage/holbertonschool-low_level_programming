#include "main.h"
/**
 * create_array - creates an array of chars with a specified char
 * @size: specified size of desired array
 * @c: specified char
 *
 * Return: NULL if size == 0 OR str for completed array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int len = size + 0;
	int i;

	str = malloc(sizeof(char) * len);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= len; i++)
		{
			str[i] = c;
		}
	}
	return (str);
	free(str);
}
