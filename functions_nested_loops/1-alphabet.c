/**
 * print_alphabet - print alphabet
 *
 * Return: 0 if successful
 */
#include "main.h"

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
