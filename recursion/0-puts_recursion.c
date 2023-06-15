#include "main.h"
/**
 * _puts_recursion - prints a string via recursion
 * @s: pointer to string to be printed
 *
 * Return: empty unless NULL, then new line
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
