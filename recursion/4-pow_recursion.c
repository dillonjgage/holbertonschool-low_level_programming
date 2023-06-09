#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int to the power off...
 * @y: set power
 *
 * Return: result of x ^ y, 1 if power of 0, or -1 if power is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * (_pow_recursion(x, (y - 1))));
}
