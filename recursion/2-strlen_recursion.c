#include "main.h"
/**
 * _strlen_recursion - returns the length of the string
 * @s: pointer to string
 *
 * Return: i -string length
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	
	if (*s)
	{
		/**
		 * i is reset to 0 every time recursively
		 * but it is set to 1 in each instance
		 * gradually returning enough instances for i to equal the length
		 */
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
