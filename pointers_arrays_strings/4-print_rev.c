#include "main.h"
/**
 *
 *
 *
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
