#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'A';

	while (alpha <= 'Z')
	{	putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
