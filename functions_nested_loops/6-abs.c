#include "main.h"
/**
 * int _abs(int) - computes the absolute value of an integer
 * @x: integer to be evaluated
 *
 * Return: absolute value of x
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
