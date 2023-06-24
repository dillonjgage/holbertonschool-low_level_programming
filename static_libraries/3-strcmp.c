#include "main.h"
/**
 * _strcmp - compare two strings lexicrographically
 * @s1: first string
 * @s2: second string to compare to first string
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int dec1;
	int dec2;
	int diff;

	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}

	dec1 = (s1[i] + '0');
	dec2 = (s2[i] + '0');
	diff = (dec1 - dec2);

	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (diff);
	}
}
