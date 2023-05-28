#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int alpha = 'a';

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
