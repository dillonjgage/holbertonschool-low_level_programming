#include "main.h"
/**
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int ii = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	while (src[ii] != 0)
	{
		dest[i] = src[ii];
		i++;
		ii++;
	}
	dest[i] = '\0';
	return (dest);
}
