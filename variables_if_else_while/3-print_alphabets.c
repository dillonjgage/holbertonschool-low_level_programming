#include <stdio.h>
/**
 * main - print the alphabet in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';
	char alphaBET = 'A';

	while (alpha <= 'z')
	{	putchar(alpha);
		alpha++;
	}
	while (alphaBET <= 'Z')
	{	putchar(alphaBET);
		alphaBET++;
	}
	putchar('\n');
	return (0);
}
