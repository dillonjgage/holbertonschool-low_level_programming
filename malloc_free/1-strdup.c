#include "main.h"
/**
 * _strdup - duplicates and returns a string that was originally provided
 * @str: pointer to original string to duplicate
 *
 * Return: NULL if str is empty OR duplcated str - tmp
 */
char *_strdup(char *str)
{
	char *temp;
	int i;
	int len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	temp = malloc(sizeof(char) * (len + 1));

	if (temp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		temp[i] = str[i];

	temp[i] = '\0';

	return (temp);
	free(temp);
}
