#include <stdio.h>
/**
 * main - print num 1 through 100
 * mul of 3 print Fizz, mul of 5 print Buzz, mul of both 3 and 5 print FizzBuzz
 *
 * Return: empty
 */
void main(void)
{
	for (int num = 1; num < 101; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (num % 3 != 0 && num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
}
