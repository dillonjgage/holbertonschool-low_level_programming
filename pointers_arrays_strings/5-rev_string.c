#include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer for the string
 *
 * Retunr: empty
 */
void rev_string(char *s)
{
	int length = 0;
	char *start;
	char *end;

	while (s[length] != '\0')
	{
		length++;
	}
	start = s;
	end = (s + (length - 1));

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
