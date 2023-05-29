#include <stdio.h>
/**
 * main - print _putchar
 *
 *Return: 0
 */
int main(void)
{
	/**
	 * Declare an array of integers call 'aray' with a length of 9
	 */
	int array[9] = {'_','p','u','t','c','h','a','r','\n'};
	/**
	 * Declare and initialize a variable 'i' with the value 0
	 */
	int i = 0;
	/**
	 * Start a while loop that continues until 'i' is greater than 9
	 */
	while (i <= 9)
	{
		/**
		 * Print the character at the 'i'-th index of the 'array'
		 * putchar(array[i]);
		 *
		 * Increment 'i' by 1
		 */
		putchar(array[i]);
		i++;
	}
	return (0);
}
