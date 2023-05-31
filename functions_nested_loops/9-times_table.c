#include "main.h"
/**
 * times_table - prints 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	for(int i = 0; i < 10; i++)
	{
		_putchar('0');

		for(int mul = 0; mul < 10; mul++)
		{
			int mul_results = i * mul;
			_putchar(mul_results);
		}
		_putchar('\n');
	}
}
