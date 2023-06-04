#include "main.h"
/**
 * print_square - prints out a square based on the input size
 * @size: input size
 *
 * Return: empty
 */
void print_square(int size)
{
	if (size > 0)
	{
		int length = 1;

		while (length <= size)
		{
			int width = 1;

			while (width <= size)
			{
				_putchar(35);
				width++;
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
