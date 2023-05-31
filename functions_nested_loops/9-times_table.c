#include "main.h"
/**
 * times_table - prints 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int row = 0;
	int col;

	while (row <= 9)
	{
		col = 0;

		while (col <= 9)
		{
			int result = row * col;

			if (result >= 9 && col != 10)
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (result < 9 && col != 10)
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(result + '0');
				_putchar('\n');
			}

			col++;
		}
		row++;
	}
}

