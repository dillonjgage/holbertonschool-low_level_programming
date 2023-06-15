#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse via recursion
 * @s: pointer to string to be printed
 *
 * Return: empty
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	if (*s)
	{
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
	s--;
}
