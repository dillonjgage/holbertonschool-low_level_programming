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
			if (p[i] > 96 && p[i] < 123)
			{
				p[i] = p[i] - 32;
			}
		}
		if (p[i] == ' ' || p[i] == '\t' || p[i] == '\n' ||
		p[i] == ',' || p[i] == ';' || p[i] == '.' ||
		p[i] == '!' || p[i] == '?' || p[i] == '"' ||
		p[i] == '(' || p[i] == ')' || p[i] == '{' ||
		p[i] == '}')
		{
			i++;

			if (p[i] > 96 && p[i] < 123)
			{
				p[i] = p[i] -32;
			}
		}
		else
		{
			if (p[i] > 64 && p[i] < 91)
			{
				p[i] = p[i] + 32;
			}
		}
	}
	return (p);
}
