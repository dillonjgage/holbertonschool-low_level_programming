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
	int i = 0, len, count = min;

	if (min > max)
		return (NULL);

	len = (max - min) + 2;

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	while (count <= max)
	{
		array[i] = count;
		count++;
		i++;
	}

	array[i] = '\0';

	return (array);
	free(array);
}
