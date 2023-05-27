#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints random n and compares the last digit to 5 6 and 0
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = $((n % 10));
	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5)
		printf("greater than 5\n");
	else if (last_digit == 0)
		printf("0\n");
	else if (last_digit < 6 && last_digit != 0)
		printf("less than 6 and not 0\n");
	return (0);
}
