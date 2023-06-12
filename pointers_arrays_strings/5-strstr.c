#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: main string to be looked through
 * @needle: specific substring to be searched for
 *
 * Return: haystack - updated with matched substring OR NULL if none
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
