#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string to add to first
 *
 * Return: NULL if fails OR pointer to the new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i;
	int concat_i = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
	free(concat_str);
}
