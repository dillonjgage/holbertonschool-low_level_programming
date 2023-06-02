#include "main.h"
/**
 * prints nums 0 through 14 ten times
 *
 * Return: empty
 */
void more_numbers(void)
{
	int count;
	int num;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num < 15; num++)
		{
			int last = num % 10;
			int first = num / 10;

			if (num > 9)
			{
				_putchar('0'+first);
			}
			_putchar('0'+last);
		}
		_putchar('\n');
	}
}
