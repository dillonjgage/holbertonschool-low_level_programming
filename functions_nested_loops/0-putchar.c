#include <stdio.h>
/**
 * main - print _putchar
 *
 *Return: 0
 */
#include"main.h"

int main(void)
{
	char myputchar[] = _putchar;
	int i = 0;

	while (i <= 9)
	{
		_putchar(myputchar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
