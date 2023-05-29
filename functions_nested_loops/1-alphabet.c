#include "main.h"
/**
 * main -print alphabet
 *
 * Return: 0 if successful
 */
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
