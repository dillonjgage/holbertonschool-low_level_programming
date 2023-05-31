#include "main.h"
/**
 * times_table - prints 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	char i, mul, mul_results;
	
	for (i = '0'; i <= '9'; i++)
	{
		for (mul = '0'; mul <= '9'; mul++)
		{
			mul_results = i * mul;
			_putchar(mul_results);
		}
		_putchar('\n');
	}
}
