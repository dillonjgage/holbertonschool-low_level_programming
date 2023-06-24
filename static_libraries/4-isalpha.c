#include "main.h"
/**
 * _isalpha - identifies if a char is alpha regardless of case
 * @c: input to be identified - parameter
 *
 * Return: 1 is yes 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
