#include "main.h"
/**
 * cap_string - cap the first letter of each word
 * @p: pointer to existing string
 *
 * Return: p - updated string
 */
char *cap_string(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		while (!(p[i] >= 'a' && p[i] <= 'z'))
		{
			i++;
		}
		if (p[i - 1] == ' ' || p[i - 1] == '\t' || p[i - 1] == '\n' ||
		p[i - 1] == ',' || p[i - 1] == ';' || p[i - 1] == '.' ||
		p[i - 1] == '!' || p[i - 1] == '?' || p[i - 1] == '"' ||
		p[i - 1] == '(' || p[i - 1] == ')' || p[i - 1] == '{' ||
		p[i - 1] == '}' || i == 0)
		{
			p[i] = p[i] - 32;
		}
		i++;
	}
	return (p);
}
