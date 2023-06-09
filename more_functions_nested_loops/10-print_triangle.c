#include "main.h"
/**
 * print_triangle - prints a triangle based on size input
 * @size: size input
 *
 * Return: empty
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int length = 1;

		while (length <= size)
		{
			int space = (size - length);
			int fill = 1;

			while (space > 0)
			{
				_putchar(32);
				space--;
			}
			while (fill <= length)
			{
				_putchar(35);
				fill++;
			}
			_putchar('\n');
			length++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
