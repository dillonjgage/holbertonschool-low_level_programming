#include <stdio.h>
/**
 * main - print the alphabet in lowercase from z to a
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{	putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
