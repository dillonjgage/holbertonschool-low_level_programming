#include "main.h"
/**
 * string_nconcat - concat 2 strings
 * @s1: first string - starting string
 * @s2: second string to add following s1
 * @n: first n of chars to include from s2
 *
 * Return: pointer to concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int i, len = n;
	int concat_i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * (len + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		concat_str[concat_i] = s1[i];
		concat_i++;
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		concat_str[concat_i] = s2[i];
		concat_i++;
	}

	concat_str[concat_i] = '\0';

	return (concat_str);
}
