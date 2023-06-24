#include "main.h"
/**
 * _islower - identifies if a char is lowercase
 * @c: input to be identified - parameter
 *
 * Return: 1 is yes 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
