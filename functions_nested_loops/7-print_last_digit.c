#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @num: number as input
 *
 * Return: rem - the remainder of 10 - aka last digit
 */
int print_last_digit(int num)
{
	int last = num % 10;

	if (num < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
