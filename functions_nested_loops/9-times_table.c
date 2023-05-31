#include "main.h"
/**
 * times_table - prints 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int row = 0;

	while (row <= 9)
	{
		int col = 0;
		
		if (col <= 9)
		{
			int result = row * col;
			_putchar(result);
			
			if (result >= 9 && row != 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (result < 9 && != 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}

			col++;
		}
		row++;
	}
}

