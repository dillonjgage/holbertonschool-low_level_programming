#include "main.h"
/**
 * main - print _putchar
 *
 *Return: 0
 */

int main(void)
{
	char myputchar[] = "_putchar";
	int i = 0;

	while (i <= 7)
	{
		_putchar(myputchar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
