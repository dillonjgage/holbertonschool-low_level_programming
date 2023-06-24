#include "main.h"
/**
 * _puts - print a string
 * @str: input string to be printed
 *
 * Return: empty
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
