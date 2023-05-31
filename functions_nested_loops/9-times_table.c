#include "main.h"
/**
 * times_table - prints 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, mul, mul_results;
	
	for (i = 0; i <= 9; i++)
	{
		_putchar('0')
		
		for (mul = 1; mul <= 9; mul++)
		{
			mul_results = i * mul;
			_putchar(mul_results + '0');
		}
		_putchar('\n');
	}
}
