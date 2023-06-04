#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 *
 * Return: empty
 */
void print_line(int n)
{
	if (n > 0)
	{
		int count = 1;

		while (count <= n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
	else 
	{
		_putchar('\n');
	}
}
