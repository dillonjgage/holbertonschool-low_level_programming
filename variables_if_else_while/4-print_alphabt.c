#include <stdio.h>
/**
 * main - print the alphabet in lowercase and skip q and e
 *
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
		
		if (alpha = 'q')
			continue;
	}
	putchar('\n');
	return (0);
}
