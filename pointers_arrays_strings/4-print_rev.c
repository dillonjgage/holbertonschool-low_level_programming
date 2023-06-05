#include "main.h"
/**
 * print_rev - prints a string backwards
 * @s: pointer to string
 *
 * Return: empty
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	while (index > 0)
	{
		_putchar(s[index]);
		--index;
	}
	_putchar('\n');
}
