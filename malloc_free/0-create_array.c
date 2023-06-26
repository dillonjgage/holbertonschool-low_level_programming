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
	int i;

	str = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
	free(str);
}
