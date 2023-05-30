#include "main.h"
/**
 * times_table - prints 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for(i=0 ; i<10 ; i++)
	{
		j = 0;

		while (j < 10)
		{
			k = j * i;
			_putchar(k);
			j++;
		}
	}
}
