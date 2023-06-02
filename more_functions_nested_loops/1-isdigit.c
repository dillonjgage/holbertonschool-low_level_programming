#include "main.h"
/**
 * _isdigit - checks for a digit 0 through 9
 * @c: input int
 * Return: 1 if a match, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
