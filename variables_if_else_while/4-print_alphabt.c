#include <stdio.h>
/**
 * main - print the alphabet in lowercase and skip q and e
 *
 * Return: 0
 */
int main(void)
{
	for (char alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if(alpha == 'q' || alpha == 'e')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return(0);
}
