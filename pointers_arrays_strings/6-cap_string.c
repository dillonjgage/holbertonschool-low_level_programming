#include "main.h"
/**
 *
 *
 *
 */
char *cap_string(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (p[i] >= 'a' && p[i] <= 'z')
			{
				p[i] = p[i] - 32;
			}
			continue;
		}
		if (p[i] == ' ' || p[i] == '\t' || p[i] == '\n' ||
		p[i] == ',' || p[i] == ';' || p[i] == '.' ||
		p[i] == '!' || p[i] == '?' || p[i] == '"' ||
		p[i] == '(' || p[i] == ')' || p[i] == '{' ||
		p[i] == '}')
		{
			i++;

			if (p[i] >= 'a' && p[i] <= 'z')
			{
				p[i] = p[i] - 32;
				continue;
			}
		}
	}
	return (p);
}
