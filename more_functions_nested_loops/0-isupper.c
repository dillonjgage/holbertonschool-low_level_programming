#include "main.h"
/**
 * _isupper - checks if c input is uppercase
 *@c: input int to check
 *
 * Return: 1 is a match, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
