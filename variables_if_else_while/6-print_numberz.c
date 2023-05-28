#include <stdio.h>
/**
 * main - prints single digit nums of base 10 starting at 0
 * 0 is 48 for the ASCII characters, which allows us to us putchar
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
