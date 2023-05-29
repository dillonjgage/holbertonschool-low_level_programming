/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: 0 if successful
 */
#include "main.h"

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{

		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
			_putchar('\n');
		}
		count++
	}
	
}
