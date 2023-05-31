#include "main.h"
/**
 * times_table - prints 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, mul, mul_results;
	
	for (i = 0; i < 10; i++)
	{
		for (mul = 0; mul < 10; mul++)
		{
			mul_results = i * mul;
			_putchar(mul_results);
		}
		_putchar('\n');
	}
}
