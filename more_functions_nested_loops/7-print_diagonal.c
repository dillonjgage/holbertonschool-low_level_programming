#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input number of times '\' is printed
 *
 * Return: empty
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int count = 1;

		while (count <= n)
		{
			int space = (count - (count - 1));

			while (space < count)
			{
				_putchar(' ');
				space++;
			}
			_putchar(92);
			_putchar('\n');
			count++;
		}
	}
}
