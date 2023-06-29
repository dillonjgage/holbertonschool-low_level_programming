#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: smallest integer in range
 * @max: largest integer in range
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array;
	int i = 0, len;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	while (i < len)
	{
		array[i] = min++;
		i++;
	}

	array[i] = '\0';

	return (array);
	free(array);
}
