#include "main.h"
/**
 *
 *
 *
 */
char *_strdup(char *str)
{
	char *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	else
	{
		temp = malloc(sizeof(*str));
		temp = str;
	}

	return (temp);
	free(temp);
}
